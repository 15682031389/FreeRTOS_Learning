#include "list.h"


xLIST List_Test;

xLIST_ITEM List_Item_1;
xLIST_ITEM List_Item_2;
xLIST_ITEM List_Item_3;

int main()
{


    vListInitialise(&List_Test);

    vListInitialiseItem(&List_Item_1);
    listSET_LIST_ITEM_VALUE(&List_Item_1, 1);
    vListInitialiseItem(&List_Item_2);
    vListInitialiseItem(&List_Item_3);

}