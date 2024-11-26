#include <stdio.h>

void find_quadrent(int x,int y)
 {
    if (x>0 && y>0) {
        printf("The coordinate point (%d,%d) is in the First quadrant.\n",x,y);
    } else if (x<0 && y>0) {
        printf("The coordinate point (%d,%d) is in the Second quadrant.\n",x,y);
    } else if (x < 0 && y < 0) {
        printf("The coordinate point (%d,%d) is in the Third quadrant.\n",x,y);
    } else if (x>0 && y<0) {
        printf("The coordinate point (%d,%d) is in the Fourth quadrant.\n",x,y);
    } else if (x==0 && y!=0) {
        printf("The coordinate point (%d,%d) is on the Y-axis.\n",x,y);
    } else if (x!=0 && y==0) {
        printf("The coordinate point (%d,%d) is on the X-axis.\n",x,y);
    } else {
        printf("The coordinate point (%d,%d) is at the origin.\n",x,y);
    }
}

int main() {
    int x, y;
    printf("Enter the x axis : ");
    scanf("%d",&x);
    printf("Enter the y axis : ");
    scanf("%d",&y);
    find_quadrent(x,y);

    return 0;
}