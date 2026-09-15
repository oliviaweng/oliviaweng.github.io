#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};


struct point new_point(int x, int y) {
    struct point p;
    p.x = x;
    p.y = y;
    return p;
}

double distance(struct point p1, struct point p2) {
    // Implement this!
    // sqrt(something);
    // Maybe don't want to confuse reader
    // with using pt to represent distance
    struct point q;
    q.x = p2.x - p1.x;
    q.y = p2.y - p1.y;
    q.x = q.x * q.x;
    q.y = q.y * q.y;
    double dist = sqrt(q.x + q.y);
    return dist;
}

double distance_v2(struct point *p1, struct point *p2) {
    double x_diff = p1->x - p2->x;
    double y_diff = p1->y - p2->y;
    return sqrt((x_diff * x_diff) + (y_diff * y_diff));
}

int main(int argc, char *argv[]) {
    struct point p1 = new_point(0, 0);
    printf("p1.x = %d p1.y = %d\n", p1.x, p1.y);
    struct point p2 = new_point(3, 4);
    printf("p2.x = %d p2.y = %d\n", p2.x, p2.y);
    printf("%f\n", distance(p1, p2));
    printf("dist_v2 = %f\n", distance_v2(&p1, &p2));
}
