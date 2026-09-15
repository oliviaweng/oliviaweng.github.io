#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

struct node {
    int data;
    struct node *next;
};

struct point new_point(int x, int y) {
    struct point p;
    p.x = x;
    p.y = y;
    return p;
}

double distance(struct point p1, struct point p2) {
    // sqrt(x) takes the sqrt of x
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return sqrt((dx * dx) + (dy * dy));

}

double distance_v2(struct point *p1, struct point *p2) {
    int dx = p2->x - p1->x;
    int dy = p2->y - p1->y;
    return sqrt((dx * dx) + (dy * dy));

}

int main(int argc, char *argv[]) {
    struct node *head = NULL; // empty list
    struct node first;
    first.data = 10;
    first.next = NULL;

    struct node second;
    second.data = 20;
    second.next = NULL;

    // Link the nodes! (including the head to pt to the front)
    head = &first;
    first.next = &second;

    // struct point p1 = new_point(0, 0);
    // printf("p1.x = %d p1.y = %d\n", p1.x, p1.y);
    // struct point p2 = new_point(3, 4);
    // printf("p2.x = %d p2.y = %d\n", p2.x, p2.y);
    // double dist = distance(p1, p2);
    // printf("dist = %f\n", dist);
    // double dist2 = distance_v2(&p1, &p2);
    // printf("dist2 = %f\n", dist2);
}
