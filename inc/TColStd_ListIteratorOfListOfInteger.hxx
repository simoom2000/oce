// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListIteratorOfListOfInteger_HeaderFile
#define _TColStd_ListIteratorOfListOfInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TColStd_ListNodeOfListOfInteger.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TColStd_ListOfInteger;
class TColStd_ListNodeOfListOfInteger;



class TColStd_ListIteratorOfListOfInteger 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_ListIteratorOfListOfInteger();
  
  Standard_EXPORT TColStd_ListIteratorOfListOfInteger(const TColStd_ListOfInteger& L);
  
  Standard_EXPORT   void Initialize (const TColStd_ListOfInteger& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Standard_Integer& Value()  const;


friend class TColStd_ListOfInteger;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Standard_Integer
#define Item_hxx <Standard_Integer.hxx>
#define TCollection_ListNode TColStd_ListNodeOfListOfInteger
#define TCollection_ListNode_hxx <TColStd_ListNodeOfListOfInteger.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfListOfInteger
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfListOfInteger.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfListOfInteger
#define TCollection_ListNode_Type_() TColStd_ListNodeOfListOfInteger_Type_()
#define TCollection_List TColStd_ListOfInteger
#define TCollection_List_hxx <TColStd_ListOfInteger.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TColStd_ListIteratorOfListOfInteger_HeaderFile
