
//anonymous structure: struct declaration without tag name. Instances i.e variables of such anonymous structure must be defined at the time of declaration itself.
struct
{
    int i;
    int j;
}point;
struct Test
{
    int i;
    int j;
    struct
    {
        int x;
        int y;
    }pt;
};
