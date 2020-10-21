#include "list_int.h"

bool Contains(const Item *i, const Item *e)
{
	bool found = false;
	while (!IsEmptyList(i) && !found)
	{
		found = (ElemCompare(GetHeadValueList(i), e) == 0);
		i = GetTailList(i);
	}
	return found;
}


Item *Intersect(const Item *i1, const Item *i2)
{
	Item *r = CreateEmptyList();
	while (!IsEmptyList(i1))
	{
		const ElemType *cur = GetHeadValueList(i1);
		if (Contains(i2, cur))
		{
			r = InsertHeadList(cur, r);
		}
		i1 = GetTailList(i1); // i1 = i1->next;
	}
	return r;
}