#include <stdio.h>

int main(){
    int r, // Rows
        c, // Columns
        Piece,
        pr, pc, // pawn
        rr, rc, // rook
        qr, qc, // queen
        br, bc, // bishop
        kr, kc; // king

    scanf("%d %d %d", &r, &c, &Piece);
    scanf("%d %d", &pr, &pc);
    scanf("%d %d", &rr, &rc);
    scanf("%d %d", &qr, &qc);
    scanf("%d %d", &br, &bc);
    scanf("%d %d", &kr, &kc);
    return 0;
}