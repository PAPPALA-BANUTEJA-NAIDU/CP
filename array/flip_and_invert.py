def flip_inv(mat):
    c = len(mat[0])
    for row in mat:
        for i in range((c+1)//2):
            row[i], row[c-i-1] = row[c-i-1] ^ 1, row[i] ^ 1

    return mat

def main():
    print(flip_inv([[1,0,1], [1,1,1], [0,1,1]]))
    print(flip_inv([[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]))

main()
