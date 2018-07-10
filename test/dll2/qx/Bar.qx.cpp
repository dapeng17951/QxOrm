#include "../include/precompiled.h"

#include "../include/Bar.h"
#include "../include/Foo.h"

#include <QxMemLeak.h>

QX_REGISTER_CPP_QX_DLL2(Bar)

namespace qx {
template <> void register_class(QxClass<Bar> & t)
{
   IxDataMember * pData = NULL;
   IxSqlRelation * pRelation = NULL;

   pData = t.data(& Bar::m_sCode, "code");
   pData = t.data(& Bar::m_sValue, "value");

   pRelation = t.relationManyToOne(& Bar::m_pFoo, "foo_id");
}}
