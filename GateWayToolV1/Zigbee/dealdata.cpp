#include "dealdata.h"

dealdata::dealdata()
{

}
QString  dealdata::CommandFuntion(QString str)
{
   if(str.mid(0,8).toUpper() == "AABBCCDD")
   {
       return str.mid(8,4).toUpper();
   }
   else
   {
       str ="";
       return str;
   }
}
