// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListNodeOfListOfTransient_HeaderFile
#define _TColStd_ListNodeOfListOfTransient_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColStd_ListNodeOfListOfTransient.hxx>

#include <Handle_Standard_Transient.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class Standard_Transient;
class TColStd_ListOfTransient;
class TColStd_ListIteratorOfListOfTransient;



class TColStd_ListNodeOfListOfTransient : public TCollection_MapNode
{

public:

  
    TColStd_ListNodeOfListOfTransient(const Handle(Standard_Transient)& I, const TCollection_MapNodePtr& n);
  
      Handle(Standard_Transient)& Value()  const;




  DEFINE_STANDARD_RTTI(TColStd_ListNodeOfListOfTransient)

protected:




private: 


  Handle(Standard_Transient) myValue;


};

#define Item Handle(Standard_Transient)
#define Item_hxx <Standard_Transient.hxx>
#define TCollection_ListNode TColStd_ListNodeOfListOfTransient
#define TCollection_ListNode_hxx <TColStd_ListNodeOfListOfTransient.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfListOfTransient
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfListOfTransient.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfListOfTransient
#define TCollection_ListNode_Type_() TColStd_ListNodeOfListOfTransient_Type_()
#define TCollection_List TColStd_ListOfTransient
#define TCollection_List_hxx <TColStd_ListOfTransient.hxx>

#include <TCollection_ListNode.lxx>

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




#endif // _TColStd_ListNodeOfListOfTransient_HeaderFile
