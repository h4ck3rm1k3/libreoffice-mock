#pragma once 
//#include <com/sun/star/uno/Any.hxx>
//#include <com/sun/star/lang/XComponent.hpp>
//#include <atkobject.h>
#include <atk/atk.h>
#include <vector>
typedef bool           sal_Bool;
typedef char           sal_Char;
typedef char           sal_Int8;
typedef unsigned char  sal_uInt8;
typedef int            sal_Int32;
typedef int            sal_Unicode;
typedef long long      sal_Int64;
typedef long           sal_uLong;
typedef short          sal_Int16;
typedef unsigned int   sal_uInt32;
typedef unsigned short sal_uInt16;

class xTableReference {};
const sal_Bool sal_False=false;
const sal_Bool sal_True=false;
const int SW_ADD_SELECT = 1;
#define SAL_NO_VTABLE
#define SVX_DLLPUBLIC
#define SVX_DLLPRIVATE
#define SAL_CALL
#define SAL_UNUSED_PARAMETER
#define CPPU_GCC_DLLPUBLIC_EXPORT
#define CPPU_GCC_DLLPRIVATE
#define CPPU_GCC3_ALIGN
//#define CHECK_FOR_DEFUNC(X) ../sw/source/core/access/acccontext.hxx:410
//#define THROW_RUNTIME_EXCEPTION(X)  ../sw/source/core/access/acccontext.hxx:394
enum colors{
  COL_BLACK,
  COL_WHITE
};


class AccessibleShapeTreeInfo {};
// {
//   ATK_ROLE_INVALID = 0,
//   ATK_ROLE_ACCEL_LABEL,
//   ATK_ROLE_ALERT,
//   ATK_ROLE_ANIMATION,
//   ATK_ROLE_ARROW,
//   ATK_ROLE_CALENDAR,
//   ATK_ROLE_CANVAS,
//   ATK_ROLE_CHECK_BOX,
//   ATK_ROLE_CHECK_MENU_ITEM,
//   ATK_ROLE_COLOR_CHOOSER,
//   ATK_ROLE_COLUMN_HEADER,
//   ATK_ROLE_COMBO_BOX,
//   ATK_ROLE_DATE_EDITOR,
//   ATK_ROLE_DESKTOP_ICON,
//   ATK_ROLE_DESKTOP_FRAME,
//   ATK_ROLE_DIAL,
//   ATK_ROLE_DIALOG,
//   ATK_ROLE_DIRECTORY_PANE,
//   ATK_ROLE_DRAWING_AREA,
//   ATK_ROLE_FILE_CHOOSER,
//   ATK_ROLE_FILLER,
//   ATK_ROLE_FONT_CHOOSER,
//   ATK_ROLE_FRAME,
//   ATK_ROLE_GLASS_PANE,
//   ATK_ROLE_HTML_CONTAINER,
//   ATK_ROLE_ICON,
//   ATK_ROLE_IMAGE,
//   ATK_ROLE_INTERNAL_FRAME,
//   ATK_ROLE_LABEL,
//   ATK_ROLE_LAYERED_PANE,
//   ATK_ROLE_LIST,
//   ATK_ROLE_LIST_ITEM,
//   ATK_ROLE_MENU,
//   ATK_ROLE_MENU_BAR,
//   ATK_ROLE_MENU_ITEM,
//   ATK_ROLE_OPTION_PANE,
//   ATK_ROLE_PAGE_TAB,
//   ATK_ROLE_PAGE_TAB_LIST,
//   ATK_ROLE_PANEL,
//   ATK_ROLE_PASSWORD_TEXT,
//   ATK_ROLE_POPUP_MENU,
//   ATK_ROLE_PROGRESS_BAR,
//   ATK_ROLE_PUSH_BUTTON,
//   ATK_ROLE_RADIO_BUTTON,
//   ATK_ROLE_RADIO_MENU_ITEM,
//   ATK_ROLE_ROOT_PANE,
//   ATK_ROLE_ROW_HEADER,
//   ATK_ROLE_SCROLL_BAR,
//   ATK_ROLE_SCROLL_PANE,
//   ATK_ROLE_SEPARATOR,
//   ATK_ROLE_SLIDER,
//   ATK_ROLE_SPLIT_PANE,
//   ATK_ROLE_SPIN_BUTTON,
//   ATK_ROLE_STATUSBAR,
//   ATK_ROLE_TABLE,
//   ATK_ROLE_TABLE_CELL,
//   ATK_ROLE_TABLE_COLUMN_HEADER,
//   ATK_ROLE_TABLE_ROW_HEADER,
//   ATK_ROLE_TEAR_OFF_MENU_ITEM,
//   ATK_ROLE_TERMINAL,
//   ATK_ROLE_TEXT,
//   ATK_ROLE_TOGGLE_BUTTON,
//   ATK_ROLE_TOOL_BAR,
//   ATK_ROLE_TOOL_TIP,
//   ATK_ROLE_TREE,
//   ATK_ROLE_TREE_TABLE,
//   ATK_ROLE_UNKNOWN,
//   ATK_ROLE_VIEWPORT,
//   ATK_ROLE_WINDOW,
//   ATK_ROLE_HEADER,
//   ATK_ROLE_FOOTER,
//   ATK_ROLE_PARAGRAPH,
//   ATK_ROLE_RULER,
//   ATK_ROLE_APPLICATION,
//   ATK_ROLE_AUTOCOMPLETE,
//   ATK_ROLE_EDITBAR,
//   ATK_ROLE_EMBEDDED,
//   ATK_ROLE_ENTRY,
//   ATK_ROLE_CHART,
//   ATK_ROLE_CAPTION,
//   ATK_ROLE_DOCUMENT_FRAME,
//   ATK_ROLE_HEADING,
//   ATK_ROLE_PAGE,
//   ATK_ROLE_SECTION,
//   ATK_ROLE_REDUNDANT_OBJECT,
//   ATK_ROLE_FORM,
//   ATK_ROLE_LINK,
//   ATK_ROLE_INPUT_METHOD_WINDOW,
//   ATK_ROLE_TABLE_ROW,
//   ATK_ROLE_TREE_ITEM,
//   ATK_ROLE_DOCUMENT_SPREADSHEET,
//   ATK_ROLE_DOCUMENT_PRESENTATION,
//   ATK_ROLE_DOCUMENT_TEXT,
//   ATK_ROLE_DOCUMENT_WEB,
//   ATK_ROLE_DOCUMENT_EMAIL,
//   ATK_ROLE_COMMENT,
//   ATK_ROLE_LIST_BOX,
//   ATK_ROLE_GROUPING,
//   ATK_ROLE_IMAGE_MAP,
//   ATK_ROLE_NOTIFICATION,
//   ATK_ROLE_INFO_BAR,
//   ATK_ROLE_LEVEL_BAR,
//   ATK_ROLE_LAST_DEFINED
// } AtkRole;


#include <assert.h>
#include <iostream>
//class XInterface;


const char * SW_RESSTR(sal_uInt16&) {}

class SdrLayerID {}; 
class SwStartNodeType{};
class ViewShell {}; 

class xmlTextWriterPtr {}; 
class xub_StrLen {}; 

namespace osl {
  class Mutex{};
  class MutexGuard{
  public:
    MutexGuard(Mutex){}
  };
};

enum tAccessibleStates {

};


class SwClient{};

//class SwAccessibleSelectionHelper{};
class SwTOXSortTabBase{};
class SfxPoolItem{};


class OString {
public:
  OString(const char *) {}
  const char * getStr() {}
  OString & operator += (const char *) {}
};
class SolarMutexGuard {};

const int RTL_TEXTENCODING_UTF8=1;

namespace rtl {
  template <class T> class Reference {
  public:
    Reference() {}
    Reference(T&) {}
    Reference(T*) {}
    template <class U> Reference(Reference<U>) {}
    template <class U> Reference(U&) {}
    template <class U> Reference(U*) {}

    //aEvent.NewValue <<= xThis;


    T * operator ->  () const  {}
    T * get() const {}
    bool is() {}
  };
  class OUStringHash{};
  // ::rtl::OUString
  class OUString {
  public:
    OUString() {}
    OUString(const char *) {}
    OUString & replaceFirst(OUString, const OUString &);

  };
  inline OString OUStringToOString(OUString , int ) {}  

  template <class T, class U> class StaticWithInit {};
};
using namespace rtl;


class SdrObject{};

class SwCntntFrm;
class SwTxtNode {
public:
  void GetOfst() {}
};


class SwShellTableCrsr;

class SwCrsrShell {
public:
  void ClearMark() {};
  template <class T> bool ISA(T) {};
  void KillPams() {};
  template <class T> void SetSelection(T){};
  void ShowCrsr(){};
  bool IsTableMode() const {};
  const SwShellTableCrsr * 	GetTableCrsr () const;
};

class FnForEach_SwNodes {}; 
class Graphic {}; 
class GraphicObject {}; 
class KSHORT {}; 
class SfxBroadcaster {}; 
class SwAttrSet {}; 
class SwGrfFmtColl {}; 
class SwHistory {}; 
class SwPaM;
class SwNode;
class SwCntntNode;
class SwNodeIndex;
class SwDoc;
class SwGrfNode;
class SwNodePtr {}; 
class SwNodeRange{};
class SwOLENode;
class SwSectionNode;
class SwTableNode;
class SwTxtNode;

namespace svt {
  class EmbeddedObjectRef{};
}; 
class SwSectionFmt {}; 
class SwSectionData {}; 
class SwTOXBase;
class SwStartNode;
class SwTxtFmtColl;
/*fwd*/class FnForEach_SwNodes; 
/*fwd*/class Graphic; 
/*fwd*/class GraphicObject; 
/*fwd*/class KSHORT;
///*fwd*/class Point; 
/*fwd*/class Reference; 
/*fwd*/class SdrLayerID; 
/*fwd*/class SfxBroadcaster; 
/*fwd*/class SwAttrSet; 
/*fwd*/class SwGrfFmtColl; 
/*fwd*/class SwHistory; 
/*fwd*/class SwPaM; 
/*fwd*/class SwPosition; 
/*fwd*/class SwSectionData; 
/*fwd*/class SwSectionFmt; 
/*fwd*/class SwTOXBase; 
/*fwd*/class SwTableBoxFmt; 
/*fwd*/class SwTableFmt; 
/*fwd*/class SwTableLine; 
/*fwd*/class SwTableLineFmt; 
/*fwd*/class SwTblToTxtSaves; 
/*fwd*/class SwTxtFmtColl; 
/*fwd*/class SwUndoTblToTxt; 
/*fwd*/class SwUndoTxtToTbl; 
/*fwd*/class TableRanges_t; 
/*fwd*/class SfxItemSet; 
/*fwd*/class SwIndex; 


class SwOutlineNodes {}; 

class SwNodes{
public:
  ~SwNodes(){}
  SwNode * 	DocumentSectionEndNode(SwNode *pNode) const{};
  void 	dumpAsXml (xmlTextWriterPtr writer){};
  SwNode * 	DocumentSectionStartNode(SwNode *pNode) const  {  };
  SwCntntNode *  GoNext(SwNodeIndex *) const  {  };
  SwCntntNode * 	GoNextSection(SwNodeIndex *, int bSkipHidden, int bSkipProtect) const{}
  SwCntntNode * 	GoPrevSection(SwNodeIndex *, int bSkipHidden, int bSkipProtect) const{}
  SwCntntNode * 	GoPrevious(SwNodeIndex *) const{}
  SwDoc * 	GetDoc(){}
  SwGrfNode * 	MakeGrfNode (const SwNodeIndex &rWhere, const GraphicObject &rGrfObj, SwGrfFmtColl *pColl, SwAttrSet *pAutoAttr){}
  SwGrfNode * 	MakeGrfNode (const SwNodeIndex &rWhere, 
                             const ::rtl::OUString &rGrfName, 
                             const ::rtl::OUString &rFltName, const Graphic *pGraphic, SwGrfFmtColl *pColl, SwAttrSet *pAutoAttr, sal_Bool bDelayed=sal_False){}
  SwNode & 	GetEndOfAutotext () const{}
  SwNode & 	GetEndOfContent () const{}
  SwNode & 	GetEndOfExtras () const{}
  SwNode & 	GetEndOfInserts () const{}
  SwNode & 	GetEndOfPostIts () const{}
  SwNode & 	GetEndOfRedlines () const{}
  SwNode * 	FindPrvNxtFrmNode (SwNodeIndex &rFrmIdx, const SwNode *pEnd) const{}
  SwNode * 	GoNextWithFrm (SwNodeIndex *) const{}
  SwNode * 	GoPreviousWithFrm (SwNodeIndex *) const{}
  SwNodePtr 	operator[] (sal_uLong n) const{}
  SwNodeRange * 	ExpandRangeForTableBox (const SwNodeRange &rRange){}
  SwOLENode * 	MakeOLENode (const SwNodeIndex &rWhere, const OUString &rName, sal_Int64 nAspect, SwGrfFmtColl *pColl, SwAttrSet *pAutoAttr){}
  SwOLENode * 	MakeOLENode (const SwNodeIndex &rWhere, const svt::EmbeddedObjectRef &, SwGrfFmtColl *pColl, SwAttrSet *pAutoAttr){}
  SwSectionNode * 	InsertTextSection (SwNodeIndex const &rNdIdx, SwSectionFmt &rSectionFmt, SwSectionData const &, SwTOXBase const *const pTOXBase, SwNodeIndex const *const pEnde, bool const bInsAtStart=true, bool const bCreateFrms=true){}
  SwStartNode * 	MakeEmptySection (const SwNodeIndex &rIdx, SwStartNodeType){}
  SwStartNode * 	MakeTextSection (const SwNodeIndex &rWhere, SwStartNodeType eSttNdTyp, SwTxtFmtColl *pColl, SwAttrSet *pAutoAttr){}
  SwTableNode * 	InsertTable (const SwNodeIndex &rNdIdx, sal_uInt16 nBoxes, SwTxtFmtColl *pCntntTxtColl, sal_uInt16 nLines, sal_uInt16 nRepeat, SwTxtFmtColl *pHeadlineTxtColl, const SwAttrSet *pAttrSet){}
  SwTableNode * 	SplitTable (const SwNodeIndex &rPos, sal_Bool bAfter, sal_Bool bCalcNewSize=sal_False){}
  SwTableNode * 	TextToTable (const SwNodeRange &rRange, sal_Unicode cCh, SwTableFmt *pTblFmt, SwTableLineFmt *pLineFmt, SwTableBoxFmt *pBoxFmt, SwTxtFmtColl *pTxtColl, SwUndoTxtToTbl *pUndo){}
  SwTableNode * 	TextToTable (const TableRanges_t &rTableNodes, SwTableFmt *pTblFmt, SwTableLineFmt *pLineFmt, SwTableBoxFmt *pBoxFmt, SwTxtFmtColl *pTxtColl){}
  SwTableNode * 	UndoTableToText (sal_uLong nStt, sal_uLong nEnd, const SwTblToTxtSaves &rSavedData){}
  SwTxtNode * 	MakeTxtNode (const SwNodeIndex &rWhere, SwTxtFmtColl *pColl, SwAttrSet *pAutoAttr){}
  const SwDoc * 	GetDoc () const{}
  const SwOutlineNodes & 	GetOutLineNds () const{}
  sal_Bool 	CheckNodesRange (const SwNodeIndex &rStt, const SwNodeIndex &rEnd) const{}
  sal_Bool 	InsBoxen (SwTableNode *, SwTableLine *, SwTableBoxFmt *, SwTxtFmtColl *, const SfxItemSet *pAutoAttr, sal_uInt16 nInsPos, sal_uInt16 nCnt=1){}
  sal_Bool 	IsDocNodes () const{}
  sal_Bool 	MergeTable (const SwNodeIndex &rPos, sal_Bool bWithPrev, sal_uInt16 nMode, SwHistory *pHistory){}
  sal_Bool 	TableToText (const SwNodeRange &rRange, sal_Unicode cCh, SwUndoTblToTxt *){}
  sal_Bool 	_MoveNodes (const SwNodeRange &, SwNodes &rNodes, const SwNodeIndex &, sal_Bool bNewFrms){}
  sal_uInt16 	GetSectionLevel (const SwNodeIndex &rIndex) const{}
  sal_uLong 	Count () const{}
  void 	Delete (const SwNodeIndex &rPos, sal_uLong nNodes){}
  void 	ForEach (FnForEach_SwNodes fnForEach, void *pArgs){}
  void 	ForEach (const SwNodeIndex &rStart, const SwNodeIndex &rEnd, FnForEach_SwNodes fnForEach, void *pArgs){}
  void 	ForEach (sal_uLong nStt, sal_uLong nEnd, FnForEach_SwNodes fnForEach, void *pArgs){}
  void 	GoEndOfSection (SwNodeIndex *) const{}
  void 	GoStartOfSection (SwNodeIndex *) const{}
  void 	MoveRange (SwPaM &, SwPosition &, SwNodes &rNodes){}
  void 	SectionDown (SwNodeRange *pRange, SwStartNodeType){}
  void 	SectionUp (SwNodeRange *){}
  void 	UpdateOutlineNode (SwNode &rNd){}
  void 	_Copy (const SwNodeRange &rRg, const SwNodeIndex &rInsPos, sal_Bool bNewFrms) const{}
};

class SwNodeIndex {
  SwNodeIndex (SwNodes &rNds, sal_uLong nIdx){}
  SwNodeIndex (const SwNode &, long nDiff){}
  SwNodeIndex (const SwNodeIndex &, long nDiff){}
  ~SwNodeIndex (){}
  SwNode & 	GetNode () const{}
  SwNodeIndex & 	Assign (SwNodes &rNds, sal_uLong){}
  SwNodeIndex & 	Assign (const SwNode &rNd, long nOffset){}
  SwNodeIndex & 	operator= (const SwNode &){}
  SwNodeIndex & 	operator= (const SwNodeIndex &){}
  SwNodeIndex & 	operator= (sal_uLong){}
  SwNodes & 	GetNodes (){}
  const SwNodes & 	GetNodes () const{}
  sal_Bool 	operator!= (const SwNodeIndex &) const{}
  sal_Bool 	operator!= (sal_uLong nWert) const{}
  sal_Bool 	operator< (const SwNodeIndex &) const{}
  sal_Bool 	operator< (sal_uLong nWert) const{}
  sal_Bool 	operator<= (const SwNodeIndex &) const{}
  sal_Bool 	operator<= (sal_uLong nWert) const{}
  sal_Bool 	operator== (const SwNodeIndex &) const{}
  sal_Bool 	operator== (sal_uLong nWert) const{}
  sal_Bool 	operator> (const SwNodeIndex &) const{}
    sal_Bool 	operator> (sal_uLong nWert) const{}
    sal_Bool 	operator>= (const SwNodeIndex &) const{}
  sal_Bool 	operator>= (sal_uLong nWert) const{}
  sal_uLong 	GetIndex () const{}
  sal_uLong 	operator++ (){}
  sal_uLong 	operator++ (int){}
  sal_uLong 	operator+= (const SwNodeIndex &){}
  sal_uLong 	operator+= (sal_uLong){}
  sal_uLong 	operator-- (){}
  sal_uLong 	operator-- (int){}
  sal_uLong 	operator-= (const SwNodeIndex &){}
  sal_uLong 	operator-= (sal_uLong){}
};

class SwPosition {
public:
  template <class T> SwPosition(const T&, SwIndex&){}
  //  SwPosition (const SwNodeIndex &rNode, const SwIndex &rCntnt){}
  SwPosition (const SwNodeIndex &rNode){}
  SwPosition (const SwNode &rNode){}
  SwPosition (SwCntntNode &rNode, const xub_StrLen nOffset){}
  SwPosition (const SwPosition &){}
  SwPosition & 	operator= (const SwPosition &){} 
  SwDoc * 	GetDoc () const {}
  bool 	operator< (const SwPosition &) const {}
  bool 	operator> (const SwPosition &) const {}
  bool 	operator<= (const SwPosition &) const {}
  bool 	operator>= (const SwPosition &) const {}
  bool 	operator== (const SwPosition &) const {}
  bool 	operator!= (const SwPosition &) const {}
};



class SwTOXBase {}; 
class SwTableBoxFmt {}; 
class SwTableFmt {}; 
class SwTableLine {}; 
class SwTableLineFmt {}; 
class SwTblToTxtSaves {}; 
class SwTxtFmtColl {}; 
class SwUndoTblToTxt {}; 
class SwUndoTxtToTbl {}; 
class TableRanges_t {}; 



class IDocumentContentOperations {}; 
class IDocumentDeviceAccess {}; 
class IDocumentDrawModelAccess {}; 
class IDocumentFieldsAccess {}; 
class IDocumentLayoutAccess {}; 
class IDocumentLineNumberAccess {}; 
class IDocumentLinksAdministration {}; 
class IDocumentListItems {}; 
class IDocumentMarkAccess {}; 
class IDocumentRedlineAccess {}; 
class IDocumentSettingAccess {}; 
class IDocumentStylePoolAccess {}; 
class IStyleAccess {}; 

class OUStringBuffer {}; 
class SW_DLLPRIVATE {}; 
class SdrMarkList {}; 
class SdrModel {}; 
class SfxHint {}; 
class SfxItemSet {}; 
class SvxBrushItem {}; 
class SwCntntNode {}; 
class SwCursor {}; 
class SwDepend {}; 
class SwDoc {}; 
class SwEndNode {}; 
class SwFmtAnchor {}; 
class SwFmtCntnt {}; 
class SwFmtCol {}; 
class SwFmtINetFmt {}; 
class SwFrmFmt {}; 
class SwGrfNode {}; 

class SwIndex{
public:
  template<class T> SwIndex(T*, SwIndex&) {}
};

class SwNoTxtNode {}; 

class SwNodes; 
class SwOLENode {}; 

class SwPageDesc {}; 
class SwSection {}; 
class SwSectionNode {}; 
class SwSortedObjs {}; 
class SwStartNode {}; 
class SwTableBox {
public:
  const OUString& GetName() const { }
}; 
class SwTableNode {}; 
class SwTblBoxFormula {}; 
class SwTxtFtn {}; 
class SwViewOption {}; 
class SwpHints {}; 


class SwNode {
public:
  IDocumentContentOperations * 	getIDocumentContentOperations (){}
  IDocumentFieldsAccess * 	getIDocumentFieldsAccess (){}
  IDocumentLayoutAccess * 	getIDocumentLayoutAccess (){}
  IDocumentLinksAdministration * 	getIDocumentLinksAdministration (){}
  IDocumentLinksAdministration * 	getIDocumentLinksAdministration () const{}
  IDocumentListItems & 	getIDocumentListItems (){}
  IStyleAccess & 	getIDocumentStyleAccess (){}
  SwCntntNode * 	GetCntntNode (){}
  SwDoc * 	GetDoc (){}
  SwEndNode * 	EndOfSectionNode (){}
  SwEndNode * 	GetEndNode (){}
  SwFrmFmt * 	GetFlyFmt () const{}
  SwGrfNode * 	GetGrfNode (){}
  SwNoTxtNode * 	GetNoTxtNode (){};
  SwNodes & 	GetNodes (){};
  SwOLENode * 	GetOLENode (){};
  SwSectionNode * 	FindSectionNode (){};
  SwSectionNode * 	GetSectionNode (){};
  SwStartNode * 	FindSttNodeByType (SwStartNodeType eTyp){};
  SwStartNode * 	GetStartNode (){};
  SwStartNode * 	StartOfSectionNode (){};
  SwTableBox * 	GetTblBox () const{};
  SwTableNode * 	FindTableNode (){};
  SwTableNode * 	GetTableNode (){}
  SwTxtNode * 	GetTxtNode (){}
  bool 	IsIgnoreDontExpand () const{}
  bool 	IsInProtectSect () const{}
  bool 	IsSetNumLSpace () const{}
  const IDocumentDeviceAccess * 	getIDocumentDeviceAccess () const{}
  const IDocumentDrawModelAccess * 	getIDocumentDrawModelAccess () const{}
  const IDocumentFieldsAccess * 	getIDocumentFieldsAccess () const{}
  const IDocumentLayoutAccess * 	getIDocumentLayoutAccess () const{}
  const IDocumentLineNumberAccess * 	getIDocumentLineNumberAccess () const{}
  const IDocumentMarkAccess * 	getIDocumentMarkAccess () const{}
  const IDocumentRedlineAccess * 	getIDocumentRedlineAccess () const{}
  const IDocumentSettingAccess * 	getIDocumentSettingAccess () const{}
  const IDocumentStylePoolAccess * 	getIDocumentStylePoolAccess () const{}
  const SwCntntNode * 	GetCntntNode () const{}
  const SwDoc * 	GetDoc () const{}
  const SwEndNode * 	EndOfSectionNode () const{}
  const SwEndNode * 	GetEndNode () const{}
  const SwGrfNode * 	GetGrfNode () const{}
  const SwNoTxtNode * 	GetNoTxtNode () const{}
  const SwNodes & 	GetNodes () const{}
  const SwOLENode * 	GetOLENode () const{}
  const SwPageDesc * 	FindPageDesc (sal_Bool bCalcLay, sal_uInt32 *pPgDescNdIdx) const{}
  const SwSectionNode * 	FindSectionNode () const{}
  const SwSectionNode * 	GetSectionNode () const{}
  const SwStartNode * 	FindFlyStartNode () const{}
  const SwStartNode * 	FindFooterStartNode () const{}
  const SwStartNode * 	FindFootnoteStartNode () const{}
  const SwStartNode * 	FindHeaderStartNode () const{}
const SwStartNode * 	FindSttNodeByType (SwStartNodeType eTyp) const{}
  const SwStartNode * 	FindTableBoxStartNode () const{}
  const SwStartNode * 	GetStartNode () const{}
  const SwStartNode * 	StartOfSectionNode () const{}
  const SwTableNode * 	FindTableNode () const{}
  const SwTableNode * 	GetTableNode () const{}
  const SwTxtNode * 	FindOutlineNodeOfLevel (sal_uInt8 nLvl) const{}
  const SwTxtNode * 	GetTxtNode () const{}
  long 	GetSerial () const{}
  sal_Bool 	IsCntntNode () const{}
  sal_Bool 	IsEndNode () const{}
  sal_Bool 	IsGrfNode () const{}
  sal_Bool 	IsInRedlines () const{}
  sal_Bool 	IsInVisibleArea (ViewShell *pSh) const{}
  sal_Bool 	IsNoTxtNode () const{}
  sal_Bool 	IsOLENode () const{}
  sal_Bool 	IsProtect () const{}
  sal_Bool 	IsSectionNode () const{}
  sal_Bool 	IsStartNode () const{}
  sal_Bool 	IsTableNode () const{}
  sal_Bool 	IsTxtNode () const{}
  sal_uInt16 	GetSectionLevel () const{}
  sal_uInt8 	GetAutoFmtLvl () const{}
  sal_uInt8 	GetNodeType () const{}
  sal_uInt8 	HasPrevNextLayNode () const{}
  sal_uLong 	EndOfSectionIndex () const{}
  sal_uLong 	GetIndex () const{}
  sal_uLong 	StartOfSectionIndex () const{}
  ~SwNode ()  {}
  virtual void 	dumpAsXml (xmlTextWriterPtr writer){}
  void 	SetAutoFmtLvl (sal_uInt8 nVal){}
  void 	SetIgnoreDontExpand (bool bNew){}
  void 	SetNumLSpace (bool bFlag){}
 
};

class SwCntntNode;
class SwNodeIndex;



class SwFEShell : public SwCrsrShell {
public:
  void FinishOLEObj(){}
  bool IsFrmSelected() const{}
  bool IsObjSelected()const{}
  template <class T> void SelectObj(T&, int){}
  template <class T> void SelectObj(T&, int, SdrObject *&){}
};

class AFrm {
public:
  bool IsEmpty() const {} 
};

class SwFrm {
public :
  bool IsRootFrm() const {};
  bool IsLayoutFrm() const {};
  bool IsTxtFrm() const {};
  bool IsPageFrm() const {};
  bool IsEmptyPage() const {};
  bool IsFlyFrm() const {};
  bool IsCntntFrm() const {};
  const SwCntntFrm * ContainsCntnt() const {};
  int GetPhyPageNum() const {};
  const SdrObject * GetVirtDrawObj() const {};
  const AFrm & Frm() const {};
  
};

//class SwTableBox{};
class SwCellFrm : public SwFrm {
public:
  SwTableBox * GetTabBox() const {};
};

class SwPageFrm  : public SwFrm {};
class SwFlyFrm   : public SwFrm {};
class SwCntntFrm : public SwFrm {};
class SwLayoutFrm : public SwFrm {};
class SwTxtFrm : public SwCntntFrm {

public:
  SwIndex & GetOfst() const;
  const SwTxtNode * GetTxtNode() const;
};


namespace com {
  namespace sun { 
    namespace star {
      
      namespace document {
        class EventObject {};
        class XEventListener{};
      }
      namespace awt {
        class KeyStroke{};
        class XFocusListener{};
        // ::com::sun::star::awt::Point 
        class Point {
        public:
          Point() {}
          Point(const int&, const int&) {}
          int X;
          int Y;   
          void setX(int X) {}
          void setY(int X) {}
          int getX() {}
          int getY() {}
        };
        // com::sun::star::awt::Rectangle
        class Rectangle : public Point{
        public:
          Rectangle(int, int, int, int) {}
          Rectangle() {}
          int Width;
          int Height;
          int Left() const;
          int Top() const;
          Point TopLeft() const {}
          void Move(int x, int y);
          int GetWidth() const;
          int GetHeight() const;
        };
        class Size {
        public:

          Size() {}
          Size(int x, int y) {}
          
        };

      };


      //using namespace com::sun::star::uno
      namespace uno {
        enum extra { UNO_QUERY }; 

        class XAggregation{};
        enum types {
          TypeClass_EXCEPTION,
          TypeClass_STRUCT,
          TypeClass_INTERFACE,
        };


        enum some_types {
          typelib_TypeClass_INTERFACE,
        };


        class Type {
        public :
          Type(com::sun::star::uno::types, rtl::OUString&){}
          template <class T> Type (T){}
          some_types eTypeClass;
        };

        class Any {
        public:
          Type * pType;
          Type * pReserved;
          template<class T >Any operator>>=(T) const {}
          operator bool() {return false;}
        };

        //::com::sun::star::uno::
        class XInterface {
        public :
          template <class T> Any queryInterface(T) {}
          void release() {}
          void acquire() {}
        };

        template<class T> class Sequence {
        public:
          int getLength() {}
          T operator [] (int x) {}
        };



        template <class T> class Reference {
        public:
          Reference() {}
          Reference(T&) {}
          Reference(T*) {}
          Reference(Reference<T>, extra){}

          template <class U> Reference(Reference<U>, extra) {}
          template <class U> Reference(Reference<U>) {}
          template <class U> Reference(U&) {}
          template <class U> Reference(U*) {}
          T * operator ->  () const  {}
          T * operator =  (T *)  {}
          template <class U>   Reference<T> & operator =  (U *)  {}
          Reference<T> operator =  (Reference<T>)  {}

          bool operator ==  (Reference<T> const) const {
            return false;
          }
          bool is() const {};
          T * get() const {}
        } ;

        template <class T> class WeakReference  : public Reference<T> {
        public:
          WeakReference<T> operator = (Reference<T>){}
        };

        class Exception {
        public:
          Exception(
                    const ::rtl::OUString& Message_, 
                    const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_
                    ) 
          {
          
          }

          Exception(
                    ) 
          {
          
          }

        };

        class RuntimeException : Exception {
        public:
          template<class T> RuntimeException(
                           rtl::OUString, 
                           com::sun::star::uno::Reference<
                           T>&) {}
        };

      };
    };
  };
};

class SwSelBoxes{
public:
  bool find(SwTableBox *) const;
  bool end() const;
};
class SwShellTableCrsr {
public:
  SwShellTableCrsr (const SwCrsrShell &rCrsrSh, const SwPosition &rPos){}
  SwShellTableCrsr (const SwCrsrShell &rCrsrSh, const SwPosition &rMkPos, 
                    const ::com::sun::star::awt::Point   &rMkPt, const SwPosition &rPtPos, const ::com::sun::star::awt::Point  &rPtPt){}
  virtual 	~SwShellTableCrsr (){}
  virtual void 	FillRects (){}
  sal_Bool 	IsInside (const ::com::sun::star::awt::Point  &rPt) const{}
  virtual void 	SetMark (){} ; 
  virtual SwCursor * 	Create (SwPaM *pRing) const {}; 
  virtual short 	MaxReplaceArived (){}; 
  virtual void 	SaveTblBoxCntnt (const SwPosition *pPos){}
  virtual sal_Bool 	IsAtValidPos (sal_Bool, ::com::sun::star::awt::Point ) const {};
  SwSelBoxes const& GetSelectedBoxes() const;
  //  bool find(SwTableBox *) const;
  //  bool end() const;
};
namespace cppu {

  template <class T, class U> bool supportsService(T,U) {};

  template <
    class T, 
    class T2, 
    class T3,
    class T4
            >
  class PartialWeakComponentImplHelper4
    : //public T, 
    public T2,public T3, public T4
  {
  public:
    void dispose();
  };
  template <
    class T, 
    class T2, 
    class T3,
    class T4
            >
  class ImplHelper4
    : public T, public T2, public T3, public T4
  {};


  template <class T> class WeakImplHelper1 : public T{};

  template <class T,
            class T2,
            class T3,
            class T4,
            class T5
            > 
  class WeakImplHelper5 : 
    //public T, 
    public T2
  //,    public T3
  //,    public T4
  //,    public T5
  {};

  template <class T> class UnoType {
  public :
    static const com::sun::star::uno::Type& get() {}

    //    static const com::sun::star::uno::Type& (*get)() {
    //      return doget;
    //}
  };
};

template <class T,class U> int rtl_str_compare(T, U) {}
//#include <cppuhelper/factory.hxx>

#define SAL_WNODEPRECATED_DECLARATIONS_PUSH
#define SAL_WNODEPRECATED_DECLARATIONS_POP


namespace com {
  namespace sun { 
    namespace star {
      namespace drawing {
        class XShape {};
      }


      //::com::sun::star::lang
      namespace lang {
        class XComponent {};
        class XTypeProvider{};
        class XUnoTunnel{};
        class DisposedException{
        public:
          template <class T>
          DisposedException(
                            rtl::OUString, 
                            T &) {}
        };
        class XServiceInfo {};
        class Locale {};
        class EventObject {
        public:

          com::sun::star::uno::Reference<com::sun::star::uno::XInterface> Source;
          //     Reference< XInterface > Source;
          template <class T> EventObject(T) {}
          EventObject( ){} 
        };
        class XEventListener {};
        class IndexOutOfBoundsException {
        public:
          template <class T> IndexOutOfBoundsException(
                                                       rtl::OUString, 
                                                       T &
                                                       ) {}

        };
        class IllegalArgumentException {};
      };
    };
  };
};


class ChildrenManager {};
using namespace com::sun::star::uno;
namespace com {
  namespace sun {
    namespace star {
      namespace accessibility {
        //  com.sun.star.accessibility
   
        /*        class AccessibleShape {
        public:
          void dispose();
          };*/
        //        class IllegalAccessibleComponentStateException {};
        // class TextSegment{
        // public:
        //   int SegmentStart;
        //   int SegmentEnd;
        // };

        //  com.sun.star.accessibility
        class AccessibleTableModelChangeType {
        public:
          enum X {
            DELETE = (sal_Int16)2,
            INSERT = (sal_Int16)1,
            UPDATE = (sal_Int16)3,

          };
        };

        // class AccessibleTableModelChange {
        // public:
        //   int FirstRow;
        //   int LastRow;
        //   int FirstColumn;
        //   int LastColumn;
        //   AccessibleTableModelChangeType::X Type;

        // };

        class XAccessibleContext;
        //        class XAccessibleTextSelection {};
        //        class XAccessibleExtendedAttributes {};
        //  com.sun.star.accessibility
        class AccessibleEventId {
        public :
          enum type_enum {
            ACTION_CHANGED = (sal_Int16)3,
            ACTIVE_DESCENDANT_CHANGED = (sal_Int16)5,
            ACTIVE_DESCENDANT_CHANGED_NOFOCUS = (sal_Int16)34,
            BOUNDRECT_CHANGED = (sal_Int16)6,
            CARET_CHANGED = (sal_Int16)20,
            CHILD = (sal_Int16)7,
            COLUMN_CHANGED = (sal_Int16)40,
            CONTENT_FLOWS_FROM_RELATION_CHANGED = (sal_Int16)12,
            CONTENT_FLOWS_TO_RELATION_CHANGED = (sal_Int16)13,
            CONTROLLED_BY_RELATION_CHANGED = (sal_Int16)14,
            CONTROLLER_FOR_RELATION_CHANGED = (sal_Int16)15,
            DESCRIPTION_CHANGED = (sal_Int16)2,
            HYPERTEXT_CHANGED = (sal_Int16)24,
            INVALIDATE_ALL_CHILDREN = (sal_Int16)8,
            LABELED_BY_RELATION_CHANGED = (sal_Int16)17,
            LABEL_FOR_RELATION_CHANGED = (sal_Int16)16,
            LISTBOX_ENTRY_COLLAPSED = (sal_Int16)33,
            LISTBOX_ENTRY_EXPANDED = (sal_Int16)32,
            MEMBER_OF_RELATION_CHANGED = (sal_Int16)18,
            NAME_CHANGED = (sal_Int16)1,
            PAGE_CHANGED = (sal_Int16)38,
            SECTION_CHANGED = (sal_Int16)39,
            SELECTION_CHANGED = (sal_Int16)9,
            SELECTION_CHANGED_ADD = (sal_Int16)35,
            SELECTION_CHANGED_REMOVE = (sal_Int16)36,
            SELECTION_CHANGED_WITHIN = (sal_Int16)37,
            STATE_CHANGED = (sal_Int16)4,
            SUB_WINDOW_OF_RELATION_CHANGED = (sal_Int16)19,
            TABLE_CAPTION_CHANGED = (sal_Int16)25,
            TABLE_COLUMN_DESCRIPTION_CHANGED = (sal_Int16)26,
            TABLE_COLUMN_HEADER_CHANGED = (sal_Int16)27,
            TABLE_MODEL_CHANGED = (sal_Int16)28,
            TABLE_ROW_DESCRIPTION_CHANGED = (sal_Int16)29,
            TABLE_ROW_HEADER_CHANGED = (sal_Int16)30,
            TABLE_SUMMARY_CHANGED = (sal_Int16)31,
            TEXT_ATTRIBUTE_CHANGED = (sal_Int16)23,
            TEXT_CHANGED = (sal_Int16)22,
            TEXT_SELECTION_CHANGED = (sal_Int16)21,
            VALUE_CHANGED = (sal_Int16)11,
            VISIBLE_DATA_CHANGED = (sal_Int16)10,
          };
          
        };

        //        class XAccessible;
        /*
          class XAccessible : public XInterface{
          public:
          XAccessibleContext * getAccessibleContext() {}

          };
        */
        /*
          class XAccessibleAction     : public XAccessible    {};
          class XAccessibleComponent  : public XAccessible    {};
          class XAccessibleHypertext    : public XAccessible  {};
          class XAccessibleImage         : public XAccessible  {};
          class XAccessibleMultiLineText : public XAccessible {};
          class XAccessibleSelection   : public XAccessible   {};
          class XAccessibleTable        : public XAccessible  {};
          class XAccessibleText          : public XAccessible {};
          class XAccessibleEditableText : public XAccessibleText  {        };
          class XAccessibleTextMarkup    : public XAccessible {};
          class XAccessibleTextAttributes : public XAccessible {};
          class XAccessibleValue        : public XAccessible  {};
          class XAccessibleEventListener {
          public :
          //  XAccessibleEventListener(AtkListener*);
          
          };
          class XAccessibleStateSet {
          public:
          uno::Sequence< sal_Int16 > getStates() {}
          template <class T> bool contains(T) {}
          };
          class XAccessibleEventBroadcaster {
          public :
          template <class T> void addAccessibleEventListener(T) {}
          };

          class XAccessibleContext : public XAccessible {
          public:
          
          OUString getAccessibleName() {}
          OUString getAccessibleDescription() {}
          int getAccessibleChildCount() {}
          Reference<XAccessible>  getAccessibleChild( int i ) {}
          int getAccessibleIndexInParent() {}
          Reference<XAccessibleRelationSet> getAccessibleRelationSet() {}
          Reference<XAccessibleStateSet>     getAccessibleStateSet () {}
          AccessibleRole::role getAccessibleRole() {}
          Reference<accessibility::XAccessible> getAccessibleParent(){}
          };

          class XAccessibleRelationSet {
          public : 
          AccessibleRelation getRelation(int n) {}
          int getRelationCount() {}
          };
          class AccessibleEventObject {
          public :
          AccessibleEventId::type_enum EventId;
          Any OldValue;
          Any NewValue;
          //Reference< accessibility::XAccessibleContext > Source;
          Reference< XInterface > Source;
          };
        */
        /*        class Set {
        public:
          int getLength() {}
          com::sun::star::uno::Reference< 
            accessibility::XAccessible > 
          operator [] (int x) {}
          };*/
        //  com.sun.star.accessibility
        class AccessibleRelationType {
        public :
          enum relation_type {
            CONTENT_FLOWS_FROM = (sal_Int16)1,
            CONTENT_FLOWS_TO = (sal_Int16)2,
            CONTROLLED_BY = (sal_Int16)3,
            CONTROLLER_FOR = (sal_Int16)4,
            DESCRIBED_BY = (sal_Int16)10,
            INVALID = (sal_Int16)0,
            LABELED_BY = (sal_Int16)6,
            LABEL_FOR = (sal_Int16)5,
            MEMBER_OF = (sal_Int16)7,
            NODE_CHILD_OF = (sal_Int16)9,
            SUB_WINDOW_OF = (sal_Int16)8,
          };
        };

        /*
          class AccessibleRelation {
          public:
          AccessibleRelationType::relation_type RelationType;
          Set TargetSet;          
          };
        */ 

        //  com.sun.star.accessibility       
        class AccessibleStateType {
        public :
          enum state_type {

            ACTIVE = (sal_Int16)1,
            ARMED = (sal_Int16)2,
            BUSY = (sal_Int16)3,
            CHECKED = (sal_Int16)4,
            COLLAPSE = (sal_Int16)34,
            DEFAULT = (sal_Int16)32,
            DEFUNC = (sal_Int16)5,
            EDITABLE = (sal_Int16)6,
            ENABLED = (sal_Int16)7,
            EXPANDABLE = (sal_Int16)8,
            EXPANDED = (sal_Int16)9,
            FOCUSABLE = (sal_Int16)10,
            FOCUSED = (sal_Int16)11,
            HORIZONTAL = (sal_Int16)12,
            ICONIFIED = (sal_Int16)13,
            INDETERMINATE = (sal_Int16)14,
            INVALID = (sal_Int16)0,
            MANAGES_DESCENDANTS = (sal_Int16)15,
            MODAL = (sal_Int16)16,
            MOVEABLE = (sal_Int16)31,
            MULTI_LINE = (sal_Int16)17,
            MULTI_SELECTABLE = (sal_Int16)18,
            OFFSCREEN = (sal_Int16)33,
            OPAQUE = (sal_Int16)19,
            PRESSED = (sal_Int16)20,
            RESIZABLE = (sal_Int16)21,
            SELECTABLE = (sal_Int16)22,
            SELECTED = (sal_Int16)23,
            SENSITIVE = (sal_Int16)24,
            SHOWING = (sal_Int16)25,
            SINGLE_LINE = (sal_Int16)26,
            STALE = (sal_Int16)27,
            TRANSIENT = (sal_Int16)28,
            VERTICAL = (sal_Int16)29,
            VISIBLE = (sal_Int16)30,

          };
        };

       
        //  com.sun.star.accessibility
        class AccessibleRole { 
        public:
          enum role {

            ALERT = (sal_Int16)1,
            BUTTON_DROPDOWN = (sal_Int16)68,
            BUTTON_MENU = (sal_Int16)69,
            CANVAS = (sal_Int16)3,
            CAPTION = (sal_Int16)70,
            CHART = (sal_Int16)71,
            CHECK_BOX = (sal_Int16)4,
            CHECK_MENU_ITEM = (sal_Int16)5,
            COLOR_CHOOSER = (sal_Int16)6,
            COLUMN_HEADER = (sal_Int16)2,
            COMBO_BOX = (sal_Int16)7,
            COMMENT = (sal_Int16)81,
            COMMENT_END = (sal_Int16)82,
            DATE_EDITOR = (sal_Int16)8,
            DESKTOP_ICON = (sal_Int16)9,
            DESKTOP_PANE = (sal_Int16)10,
            DIALOG = (sal_Int16)12,
            DIRECTORY_PANE = (sal_Int16)11,
            DOCUMENT = (sal_Int16)13,
            EDIT_BAR = (sal_Int16)72,
            EMBEDDED_OBJECT = (sal_Int16)14,
            END_NOTE = (sal_Int16)15,
            FILE_CHOOSER = (sal_Int16)16,
            FILLER = (sal_Int16)17,
            FONT_CHOOSER = (sal_Int16)18,
            FOOTER = (sal_Int16)19,
            FOOTNOTE = (sal_Int16)20,
            FORM = (sal_Int16)73,
            FRAME = (sal_Int16)21,
            GLASS_PANE = (sal_Int16)22,
            GRAPHIC = (sal_Int16)23,
            GROUP_BOX = (sal_Int16)24,
            HEADER = (sal_Int16)25,
            HEADING = (sal_Int16)26,
            HYPER_LINK = (sal_Int16)27,
            ICON = (sal_Int16)28,
            IMAGE_MAP = (sal_Int16)74,
            INTERNAL_FRAME = (sal_Int16)29,
            LABEL = (sal_Int16)30,
            LAYERED_PANE = (sal_Int16)31,
            LIST = (sal_Int16)32,
            LIST_ITEM = (sal_Int16)33,
            MENU = (sal_Int16)34,
            MENU_BAR = (sal_Int16)35,
            MENU_ITEM = (sal_Int16)36,
            NOTE = (sal_Int16)75,
            OPTION_PANE = (sal_Int16)37,
            PAGE = (sal_Int16)76,
            PAGE_TAB = (sal_Int16)38,
            PAGE_TAB_LIST = (sal_Int16)39,
            PANEL = (sal_Int16)40,
            PARAGRAPH = (sal_Int16)41,
            PASSWORD_TEXT = (sal_Int16)42,
            POPUP_MENU = (sal_Int16)43,
            PROGRESS_BAR = (sal_Int16)45,
            PUSH_BUTTON = (sal_Int16)44,
            RADIO_BUTTON = (sal_Int16)46,
            RADIO_MENU_ITEM = (sal_Int16)47,
            ROOT_PANE = (sal_Int16)49,
            ROW_HEADER = (sal_Int16)48,
            RULER = (sal_Int16)77,
            SCROLL_BAR = (sal_Int16)50,
            SCROLL_PANE = (sal_Int16)51,
            SECTION = (sal_Int16)78,
            SEPARATOR = (sal_Int16)53,
            SHAPE = (sal_Int16)52,
            SLIDER = (sal_Int16)54,
            SPIN_BOX = (sal_Int16)55,
            SPLIT_PANE = (sal_Int16)56,
            STATUS_BAR = (sal_Int16)57,
            TABLE = (sal_Int16)58,
            TABLE_CELL = (sal_Int16)59,
            TEXT = (sal_Int16)60,
            TEXT_FRAME = (sal_Int16)61,
            TOGGLE_BUTTON = (sal_Int16)62,
            TOOL_BAR = (sal_Int16)63,
            TOOL_TIP = (sal_Int16)64,
            TREE = (sal_Int16)65,
            TREE_ITEM = (sal_Int16)79,
            TREE_TABLE = (sal_Int16)80,
            UNKNOWN = (sal_Int16)0,
            VIEW_PORT = (sal_Int16)66,
            WINDOW = (sal_Int16)67,
            // EDIT_BAR,
            // CAPTION,
            // CHART,
            // DOCUMENT,
            // EMBEDDED_OBJECT,
            // END_NOTE,
            // FOOTNOTE,
            // FORM,
            // GROUP_BOX,
            // HEADING,
            // HYPER_LINK,
            // IMAGE_MAP,
            // NOTE,
            // PAGE,
            // SECTION,
            // SHAPE,
            // TEXT_FRAME,
            // TREE_ITEM
          };
        };

      }
    }
  }
}

namespace utl {
  class AccessibleRelationSetHelper {
    
  };
  class AccessibleStateSetHelper{
  public:
    AccessibleStateSetHelper() {}

    void AddState(
                  ::com::sun::star::accessibility::AccessibleStateType::state_type
                  
                  );
  };
};

namespace com {
  namespace sun { 
    namespace star{ 
      namespace container {
        class XContainerListener{};
        class ContainerEvent{};
      }
      namespace util {
        class XModeChangeListener{};
        class ModeChangeEvent{};
      }

      namespace beans {
        class XPropertySetInfo{};
        class PropertyChangeEvent{};
        class XPropertySet {};
        class XPropertyChangeListener {};
        class PropertyValue {};
      };

    };
  };
};


//enum AtkRole;

template<typename T, std::size_t Size>
std::size_t SAL_N_ELEMENTS(T(&)[Size]) { 
  //from http://stackoverflow.com/questions/3368883/how-does-this-size-of-array-template-function-work
  //std::cout << "Count" << Size << std::endl;
  return Size; 
}


template <class T> void OSL_FAIL(T) {}
template <class T> void OSL_ASSERT(T) {}

class Window;

class SwPostItMgr{
public: 
  bool HasNotes();
  bool ShowNotes();
  template <class T> bool HasFrmConnectedSidebarWins(T);
  template <class T, class U> Window* GetSidebarWinForFrmByIndex(T,U);
  template <class T, class U> Window* GetAllSidebarWinForFrm(T,U);

};
class SwViewShell : public SwCrsrShell {
public :
  Window * GetWin() const {}
  bool IsPreview(){}
  SwPostItMgr * GetPostItMgr(){}

  template <class T> bool ISA(T) const{}
};
#define ISA(X) ISA(X())

/*class SwAccessibleMap{
public:
  SwViewShell * GetShell() const;
  };*/
class Fraction {};

#define SAL_THROW(X)

//#define SAL_THROW
//#define SAL_THROW(X) ;
// throws X

  class Foo{
  public:
    bool operator == ( Foo &){}
};

class SwPaM {
public:
  SwPaM(SwPosition&){};
  Foo * GetMark(){};
  Foo * GetPoint() {}
  bool HasMark(){}
  
};

using namespace com::sun::star::awt;
template <class T> void OSL_ENSURE(T, const char * message){}
class typelib_TypeDescription {};
class typelib_TypeClass {};

#define EDITENG_DLLPUBLIC
#define DECLARE_XINTERFACE(X)
#define DECLARE_XTYPEPROVIDER(X)


com::sun::star::uno::Any operator<<= (com::sun::star::uno::Any, com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleContext>) {
}

com::sun::star::uno::Any operator<<= (com::sun::star::uno::Any, sal_Int16) {
}

#include <com/sun/star/accessibility/AccessibleEventObject.hdl>
#include <com/sun/star/accessibility/XAccessibleEventListener.hdl>

namespace comphelper {
  class AccessibleEventNotifier {
  public:
    static int registerClient();
    static void revokeClient( int nClientId );
    static int removeEventListener(sal_uInt32&, const com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleEventListener>&);
    static void addEventListener( sal_uInt32&, const com::sun::star::uno::Reference<com::sun::star::accessibility::XAccessibleEventListener>& );

    template <class T> static void revokeClientNotifyDisposing(
                                                               sal_uInt32&, 
                                                               T&
                                                               ){}
    static void 
    addEvent( 
             int nClientId, 
             ::com::sun::star::accessibility::AccessibleEventObject& rEvent 
              ){}
  };
};

//#include <com/sun/star/accessibility/XAccessible.hpp>
#include <com/sun/star/accessibility/XAccessible.hdl>

class FunkyXAccessible {};

class Window{
public:
  bool HasFocus() {}

  FunkyXAccessible funky;

  ::com::sun::star::uno::Reference< 
    ::com::sun::star::accessibility::XAccessible > r;

  ::com::sun::star::uno::Reference<
    ::com::sun::star::accessibility::XAccessible
    > GetAccessible() {}
  FunkyXAccessible   GetAccessible2() {}

Point OutputToAbsoluteScreenPixel(::com::sun::star::awt::Point );

};

class LanguageTag 
{
public:

::com::sun::star::lang::Locale getLocale();

};

class Settings {
public:
LanguageTag GetLanguageTag();
};


class Application {
public:
static Settings GetSettings();
};

class SwRect : public com::sun::star::awt::Rectangle 
{
public:
bool operator ==  (SwRect const) const {
return false;
}
void SSize(com::sun::star::awt::Size x);
template <class T> bool IsOver(T) const ;
SwRect SVRect() const;
int GetPreviewPageSize( int nPageNum );
bool IsEmpty() const;

};


class SwWrtShell
: public SwCrsrShell
{
public:
template<class T>  void SetSelection(T&);
  void SttSelect();
};

/*
'nFlags' was not declared in this scope

invalid static_cast from type 
no matching function for call to 'SwPaM::SwPaM(SwPosition&)'
no matching function for call to 'SwPosition::SwPosition(const SwTxtNode&, SwIndex&)'
no matching function for call to 'rtl::Reference<accessibility::AccessibleShape>::Reference(accessibility::AccessibleShape*&)'
passing 'const SwRect' as 'this' argument of 'bool SwRect::IsEmpty()' discards qualifiers [-fpermissive]
passing 'const SwRect' as 'this' argument of 'int com::sun::star::awt::Rectangle::Left()' discards qualifiers [-fpermissive]
passing 'const SwRect' as 'this' argument of 'int com::sun::star::awt::Rectangle::Top()' discards qualifiers [-fpermissive]
passing 'const SwTxtFrm' as 'this' argument of 'const SwTxtNode* SwTxtFrm::GetTxtNode()' discards qualifiers [-fpermissive]
request for member 'IsEmpty' in '(& rChildFrmOrObj)->sw::access::SwAccessibleChild::GetSwFrm()->SwFrm::Frm()', which is of pointer type 'AFrm*' (maybe you meant to use '->' ?)
request for member 'IsEmpty' in '((SwAccessibleContext*)this)->SwAccessibleContext::<anonymous>.SwAccessibleFrame::GetFrm()->SwFrm::Frm()', which is of pointer type 'AFrm*' (maybe you meant to use '->' ?)
 'aBuffer' was not declared in this scope
 'AddChild' was not declared in this scope
 'aDepend' was not declared in this scope
 'aIter' was not declared in this scope
 'aList' was not declared in this scope
 'aLogBounds' was not declared in this scope
 'aMutex' was not declared in this scope
 'aPixPoint' was not declared in this scope
 'aSelectionHelper' was not declared in this scope
 'aURL' was not declared in this scope
 'aValue' was not declared in this scope
 'aVisList' was not declared in this scope
 'bBeginDocumentLoad' was not declared in this scope
 'bDisposing' was not declared in this scope
 'bFinished' was not declared in this scope
 'bIsDefuncState' was not declared in this scope
 'bIsEditableState' was not declared in this scope
 'bIsOpaqueState' was not declared in this scope
 'bIsSeletedInDoc' was not declared in this scope
 'bIsShowingState' was not declared in this scope
 'bRegisteredAtAccessibleMap' was not declared in this scope
 'DisposeChild' was not declared in this scope
 'DisposeShape' was not declared in this scope
 'eAnchorId' was not declared in this scope
 'EndListening' was not declared in this scope
 'FindBreak' was not declared in this scope
 'FireAccessibleEvent' was not declared in this scope
 'FireStateChangedEvent' was not declared in this scope
 'FireVisibleDataEvent' was not declared in this scope
 'FLY_AS_CHAR' was not declared in this scope
 'FLY_AT_PARA' was not declared in this scope
 'FormatNumber' was not declared in this scope
 'getBoundsImpl' was not declared in this scope
 'GetBounds' was not declared in this scope
 'GetChildAtPixel' was not declared in this scope
 'GetChildCount' was not declared in this scope
 'GetChild' was not declared in this scope
 'GetCrsrShell' was not declared in this scope
 'GetFrm' was not declared in this scope
 'GetMap' was not declared in this scope
 'GetModelPosition' was not declared in this scope
 'GetName' was not declared in this scope
 'GetParent' was not declared in this scope
 'GetRegisteredInNonConst' was not declared in this scope
 'GetRegisteredIn' was not declared in this scope
 'GetResource' was not declared in this scope
 'GetRole' was not declared in this scope
 'GetSdrObjectFromXShape' was not declared in this scope
 'GetShell' was not declared in this scope
 'getSize' was not declared in this scope
 'GetVisArea' was not declared in this scope
 'GetWeakParent' was not declared in this scope
 'GetWindow' was not declared in this scope
 'g_pBreakIt' was not declared in this scope

 'HasCursor' was not declared in this scope
 'ImageMap' was not declared in this scope
 'IMapObject' was not declared in this scope
 'IsEditable' was not declared in this scope
 'isIfAsynLoad' was not declared in this scope
 'IsInPagePreview' was not declared in this scope
 'IsOpaque' was not declared in this scope
 'IsShowing' was not declared in this scope
 'i' was not declared in this scope
 'LoadURL' was not declared in this scope
 'maEventListeners' was not declared in this scope
 'maSelectionHelper' was not declared in this scope
 'maVisArea' was not declared in this scope
 'mpDrawModel' was not declared in this scope
 'mpFrmFmt' was not declared in this scope
 'nClientId' was not declared in this scope
 'nControlsId' was not declared in this scope
 'nEndIndex' was not declared in this scope
 'nHellId' was not declared in this scope
 'nHere' was not declared in this scope
 'nLayer' was not declared in this scope
 'nLineNum' was not declared in this scope
 'nLinks' was not declared in this scope
 'nResId' was not declared in this scope
 'nRole' was not declared in this scope
 'nStartIndex' was not declared in this scope
 'NULL' was not declared in this scope
 'pAccImpl' was not declared in this scope
 'pAcc' was not declared in this scope
 'pAnchor' was not declared in this scope
 'pCNd' was not declared in this scope
 'pCntntNode' was not declared in this scope
 'pCurrSctFrm' was not declared in this scope
 'pDocSh' was not declared in this scope
 'pDoc' was not declared in this scope
 'pEvent' was not declared in this scope
 '_pField' was not declared in this scope
 'pFmt' was not declared in this scope
 'pFrmFmt' was not declared in this scope
 'pHints' was not declared in this scope
 'pKeyBindingHelper' was not declared in this scope
 'pMapObj' was not declared in this scope
 'pMap' was not declared in this scope
 'pNdIdx' was not declared in this scope
 'pObjs' was not declared in this scope
 'pParent' was not declared in this scope
 'pPrevNode' was not declared in this scope
 'pSection' was not declared in this scope
 '__pStartCrsr' was not declared in this scope
 'pStateSet' was not declared in this scope
 'pSwCntntNode' was not declared in this scope
 'pTxtAttr2' was not declared in this scope
 'pTxtFtn' was not declared in this scope
 'pUpper' was not declared in this scope
 'pVclEvent' was not declared in this scope
 'pVOpt' was not declared in this scope
 'rAnchor' was not declared in this scope
 'rBack' was not declared in this scope
 'RemoveChild' was not declared in this scope
 'RemoveFrmFromAccessibleMap' was not declared in this scope

 'rFmtCol' was not declared in this scope
 'rFmtSctCol' was not declared in this scope
 'rINetFmt' was not declared in this scope
 'rMrkList' was not declared in this scope
 'RndStdIds' was not declared in this scope
 'sAccessibleServiceName' was not declared in this scope
 'sAccessibleString' was not declared in this scope
 'ScrolledInShape' was not declared in this scope
 'Select' was not declared in this scope
 'SetName' was not declared in this scope
 'SetParent' was not declared in this scope
 'SetVisArea' was not declared in this scope
 'SfxBroadcaster' was not declared in this scope
 '' was not declared in this scope
 'sName' was not declared in this scope
 'tbl_formula' was not declared in this scope

 'xAccContext' was not declared in this scope
 'xAcc' was not declared in this scope
 'xAnchor' was not declared in this scope
 'xContextTable' was not declared in this scope
 'xParent' was not declared in this scope
 '' was not declared in this scope
 'xTmp' was not declared in this scope
 'xWeakParent' was not declared in this scope


*/

#define   THROW_RUNTIME_EXCEPTION

enum stuff {

  GPOS_NONE,
  KEY_RETURN,
  KSHORT,
  LINK,
  ND_TEXTNODE,
  SAL_WARN_IF,
  CHECK_FOR_DEFUNC,
  CHECK_FOR_WINDOW,
  ClearFrm,
  CNT_GRF,
  CNT_OLE,
  CNT_TXT,
  COL_AUTO,
  COL_TRANSPARENT,
  DBG_ASSERT,
  SFX_TITLE_APINAME,
  STR_ACCESS_DOC_DESC,
  STR_ACCESS_DOC_NAME,
  STR_ACCESS_DOC_WORDPROCESSING_READONLY,
  STR_ACCESS_DOC_WORDPROCESSING,
  STR_ACCESS_ENDNOTE_NAME,
  STR_ACCESS_FOOTER_DESC,
  STR_ACCESS_FOOTER_NAME,
  STR_ACCESS_FOOTNOTE_NAME,
  STR_ACCESS_HEADER_DESC,
  STR_ACCESS_HEADER_NAME,
  STR_ACCESS_PAGE_DESC,
  STR_ACCESS_PAGE_NAME,
  STR_ACCESS_PREVIEW_DOC_NAME,
  STR_ACCESS_PREVIEW_DOC_SUFFIX,
  SVX_NUM_ARABIC,
  SVX_NUM_NUMBER_NONE,
  RES_DESCRIPTION_CHANGED,
  RES_FMT_CHG,
  RES_NAME_CHANGED,
  RES_OBJECTDYING,
  RES_TITLE_CHANGED,
  RES_TXTATR_INETFMT,
  TOX_CONTENT_SECTION,
  TOX_HEADER_SECTION,
  URLLOAD_NOFILTER,
  VCLEVENT_OBJECT_DYING,
  VCLEVENT_WINDOW_HIDE,
  VCLEVENT_WINDOW_SHOW,
    };

class  VclWindowEvent {};
class  WindowChildEventListener{};


//class SwCntntNode {};
class SwDocShell {};
//class SwDoc {};
class SwDrawContact {};
class SwFmtChg {};
class SwFmtURL {};
//class SwFrmFmt {};
class SwModify {};
class SW_MOD {};
class SwPtrMsgPoolItem {};
class SwSectionFrm {};
class SwStringMsgPoolItem {};
class SwTblBoxValue {};
class SwTxtINetFmt {};
class SwVirtFlyDrawObj {};

class SwAccessibleContext; // forward

///*dcl*/class SwSelBoxes {}; 
/*dcl*/class SwTabFrm {}; 
/*dcl*/class SwAccessibleField {}; 
/*dcl*/class SwFtnFrm {}; 
///*dcl*/class SwAccessibleMap {}; 

#include <sw/source/core/access/accfrmobjslist.hxx>
#include <sw/source/core/access/acccontext.hxx>

// todo replace thse
// class SwAccessibleContext :
//     public ::cppu::WeakImplHelper5<
//                 ::com::sun::star::accessibility::XAccessible,
//                 ::com::sun::star::accessibility::XAccessibleContext,
//                 ::com::sun::star::accessibility::XAccessibleComponent,
//                 ::com::sun::star::accessibility::XAccessibleEventBroadcaster,
//                 ::com::sun::star::lang::XServiceInfo
//                 >,
//     public SwAccessibleFrame
// {
//   void acquire(){}
//   void release(){}



//     friend class SwAccessibleSelectionHelper;

// protected:
//     mutable ::osl::Mutex aListenerMutex;
//     mutable ::osl::Mutex aMutex;

// private:
//     OUString sName;



//     ::com::sun::star::uno::WeakReference <
//         ::com::sun::star::accessibility::XAccessible > xWeakParent;

//     SwAccessibleMap *pMap;

//     sal_uInt32 nClientId;
//     sal_Int16 nRole;


//     sal_Bool bIsShowingState : 1;
//     sal_Bool bIsEditableState : 1;
//     sal_Bool bIsOpaqueState : 1;
//     sal_Bool bIsDefuncState : 1;


//     sal_Bool bDisposing : 1;



//     bool bRegisteredAtAccessibleMap;

//     void InitStates();

//     sal_Bool bBeginDocumentLoad;

// protected:
//     void SetName( const OUString& rName ) { sName = rName; }
//     inline sal_Int16 GetRole() const
//     {
//         return nRole;
//     }

//     sal_Bool isIfAsynLoad;

//     sal_Bool bIsSeletedInDoc;
//     void SetParent( SwAccessibleContext *pParent );
//     ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible> GetWeakParent() const;

//     sal_Bool IsDisposing() const { return bDisposing; }

//     Window *GetWindow();
//     SwAccessibleMap *GetMap() { return pMap; }
//     const SwAccessibleMap *GetMap() const { return pMap; }


//     inline SwViewShell* GetShell()
//     {
//         return GetMap()->GetShell();
//     }
//     inline const SwViewShell* GetShell() const
//     {
//         return GetMap()->GetShell();
//     }



//     SwCrsrShell* GetCrsrShell();
//     const SwCrsrShell* GetCrsrShell() const;




//     void ChildrenScrolled( const SwFrm *pFrm, const SwRect& rOldVisArea );



//     void Scrolled( const SwRect& rOldVisArea );


//     void ScrolledWithin( const SwRect& rOldVisArea );


//     void ScrolledIn();


//     void ScrolledOut( const SwRect& rOldVisArea );




//     void InvalidateChildrenStates( const SwFrm* _pFrm,
//                                    tAccessibleStates _nStates );



//     void DisposeChildren( const SwFrm *pFrm,
//                                        sal_Bool bRecursive );

//     void DisposeShape( const SdrObject *pObj,
//                                 ::accessibility::AccessibleShape *pAccImpl );
//     void ScrolledInShape( const SdrObject *pObj,
//                                 ::accessibility::AccessibleShape *pAccImpl );

//     virtual void _InvalidateContent( sal_Bool bVisibleDataFired );

//     virtual void _InvalidateCursorPos();
//     virtual void _InvalidateFocus();

// public:
//     void SetMap(SwAccessibleMap *pM){pMap = pM;}
//     void FireAccessibleEvent( ::com::sun::star::accessibility::AccessibleEventObject& rEvent );

// protected:

//     void FireVisibleDataEvent();


//     void FireStateChangedEvent( sal_Int16 nState, sal_Bool bNewState );




//     virtual void GetStates( ::utl::AccessibleStateSetHelper& rStateSet );

//      sal_Bool IsEditableState();

//     virtual ::com::sun::star::awt::Rectangle
//         getBoundsImpl(sal_Bool bRelative)
//         throw (::com::sun::star::uno::RuntimeException);


//     inline void NotRegisteredAtAccessibleMap()
//     {
//         bRegisteredAtAccessibleMap = false;
//     }
//     void RemoveFrmFromAccessibleMap();

//     virtual ~SwAccessibleContext();

// public:
//     SwAccessibleContext( SwAccessibleMap *pMap, sal_Int16 nRole,
//                          const SwFrm *pFrm );




//     virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessibleContext>
//         getAccessibleContext (void) throw (com::sun::star::uno::RuntimeException);




//     virtual sal_Int32 getAccessibleChildCount (void)
//         throw (::com::sun::star::uno::RuntimeException);


//     virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible>
//         getAccessibleChild (sal_Int32 nIndex)
//         throw (::com::sun::star::uno::RuntimeException,
//                 ::com::sun::star::lang::IndexOutOfBoundsException);


//     virtual ::com::sun::star::uno::Reference< ::com::sun::star::accessibility::XAccessible>
//         getAccessibleParent (void)
//         throw (::com::sun::star::uno::RuntimeException);


//     virtual sal_Int32
//         getAccessibleIndexInParent (void)
//         throw (::com::sun::star::uno::RuntimeException);


//     virtual sal_Int16
//         getAccessibleRole (void)
//         throw (::com::sun::star::uno::RuntimeException);


//     virtual OUString
//         getAccessibleDescription (void)
//         throw (::com::sun::star::uno::RuntimeException);


//     virtual OUString
//         getAccessibleName (void)
//         throw (::com::sun::star::uno::RuntimeException);


//     virtual ::com::sun::star::uno::Reference<
//             ::com::sun::star::accessibility::XAccessibleRelationSet>
//         getAccessibleRelationSet (void)
//         throw (::com::sun::star::uno::RuntimeException);


//     virtual ::com::sun::star::uno::Reference<
//             ::com::sun::star::accessibility::XAccessibleStateSet>
//         getAccessibleStateSet (void)
//         throw (::com::sun::star::uno::RuntimeException);



//     virtual ::com::sun::star::lang::Locale
//         getLocale (void)
//         throw (::com::sun::star::accessibility::IllegalAccessibleComponentStateException, ::com::sun::star::uno::RuntimeException);



//     virtual void addAccessibleEventListener(
//             const ::com::sun::star::uno::Reference<
//                 ::com::sun::star::accessibility::XAccessibleEventListener >& xListener )
//         throw (::com::sun::star::uno::RuntimeException);
//     virtual void removeAccessibleEventListener(
//             const ::com::sun::star::uno::Reference<
//                 ::com::sun::star::accessibility::XAccessibleEventListener >& xListener )
//         throw (::com::sun::star::uno::RuntimeException);


//     virtual sal_Bool containsPoint(
//             const ::com::sun::star::awt::Point& aPoint )
//         throw (::com::sun::star::uno::RuntimeException);

//     virtual ::com::sun::star::uno::Reference<
//         ::com::sun::star::accessibility::XAccessible > getAccessibleAtPoint(
//                 const ::com::sun::star::awt::Point& aPoint )
//         throw (::com::sun::star::uno::RuntimeException);

//     virtual ::com::sun::star::awt::Rectangle getBounds()
//         throw (::com::sun::star::uno::RuntimeException);

//     virtual ::com::sun::star::awt::Point getLocation()
//         throw (::com::sun::star::uno::RuntimeException);

//     virtual ::com::sun::star::awt::Point getLocationOnScreen()
//         throw (::com::sun::star::uno::RuntimeException);

//     virtual ::com::sun::star::awt::Size getSize()
//         throw (::com::sun::star::uno::RuntimeException);

//     virtual void grabFocus()
//         throw (::com::sun::star::uno::RuntimeException);

//     virtual ::com::sun::star::uno::Any getAccessibleKeyBinding()
//         throw (::com::sun::star::uno::RuntimeException);
//     virtual sal_Int32 getForeground()
//         throw (::com::sun::star::uno::RuntimeException);
//     virtual sal_Int32 getBackground()
//         throw (::com::sun::star::uno::RuntimeException);




//     virtual OUString
//         getImplementationName (void)
//         throw (::com::sun::star::uno::RuntimeException);


//     virtual sal_Bool
//         supportsService (const OUString& sServiceName)
//         throw (::com::sun::star::uno::RuntimeException);



//     virtual ::com::sun::star::uno::Sequence< OUString>
//         getSupportedServiceNames (void)
//              throw (::com::sun::star::uno::RuntimeException);




//     virtual void Dispose( sal_Bool bRecursive = sal_False );


//     virtual void DisposeChild( const sw::access::SwAccessibleChild& rFrmOrObj, sal_Bool bRecursive );


//     virtual void InvalidatePosOrSize( const SwRect& rFrm );


//     virtual void InvalidateChildPosOrSize( const sw::access::SwAccessibleChild& rFrmOrObj,
//                                            const SwRect& rFrm );


//     void InvalidateContent();


//     void InvalidateCursorPos();


//     void InvalidateFocus();



//     void InvalidateStates( tAccessibleStates _nStates );


//     void InvalidateRelation( sal_uInt16 nType );

//     void InvalidateTextSelection();
//     void InvalidateAttr();

//     bool HasAdditionalAccessibleChildren();


//     Window* GetAdditionalAccessibleChild( const sal_Int32 nIndex );


//     void GetAdditionalAccessibleChildren( std::vector< Window* >* pChildren );

//     const OUString& GetName() const { return sName; }

//     virtual sal_Bool HasCursor();

//     sal_Bool Select( SwPaM *pPaM, SdrObject *pObj, sal_Bool bAdd );
//     inline sal_Bool Select( SwPaM& rPaM )
//     {
//         return Select( &rPaM, 0, sal_False );
//     }
//     inline sal_Bool Select( SdrObject *pObj, sal_Bool bAdd )
//     {
//         return Select( 0, pObj, bAdd );
//     }


//     virtual sal_Bool SetSelectedState(sal_Bool bSeleted);
//     sal_Bool IsSeletedInDoc(){ return bIsSeletedInDoc; }

//     static OUString GetResource( sal_uInt16 nResId,
//                                         const OUString *pArg1 = 0,
//                                         const OUString *pArg2 = 0 );
// };

//class SwAccessibleSelectionHelper{};

#include <sw/source/core/access/accselectionhelper.hxx>
#include <acccontext.hxx>
#include <accfrmobj.hxx>

