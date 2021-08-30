struct point
{
    float x;
    float y;
};


struct rect
{
    struct point *pt1;
    struct point *pt2;
};

int main()
{
    struct point pt1 = {0,0}, pt2 = {3,4};
    struct rect r;
    r.pt1 = &pt1;
    r.pt2 = &pt2;

    printf("%f", r.pt1->x);
}
