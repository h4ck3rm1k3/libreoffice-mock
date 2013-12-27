#pragma once 
//#include <com/sun/star/uno/Any.hxx>
//#include <com/sun/star/lang/XComponent.hpp>
//#include <atkobject.h>
#include <atk/atk.h>
#include <vector>
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
typedef char sal_Int8;
typedef int sal_Unicode;
typedef short  sal_Int16;
typedef unsigned short  sal_uInt16;
typedef bool   sal_Bool;
typedef int    sal_Int32;
typedef unsigned int sal_uInt32;
class OUStringHash{};
class OUString {};

const sal_Bool sal_False=false;
const sal_Bool sal_True=false;

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

class SwAccessibleSelectionHelper{};
class SwTOXSortTabBase{};
class SfxPoolItem{};
namespace utl {
  class AccessibleStateSetHelper{

  };
};

class OString {
public:
  OString(const char *) {}
  const char * getStr() {}
  OString & operator += (const char *) {}
};
class SolarMutexGuard {};

const int RTL_TEXTENCODING_UTF8=1;
inline OString OUStringToOString(OUString , int ) {}

class SdrObject{};



class SwFrm {};
class SwRect{
public:
  template <class T> bool IsOver(T) const ;
};
class Window{};


namespace com {
  namespace sun { 
    namespace star {
      namespace awt {
        class Point {
          int X;
          int Y;          
        };
        class Rectangle : public Point{
          int Width;

        };
        class Size {};

      };


      namespace uno {


        enum some_types {
          typelib_TypeClass_INTERFACE,
        };


        class Type {
        public :
          template <class T> Type (T);
          some_types eTypeClass;
        };

        class Any {
        public:
          Type * pType;
          Type * pReserved;
          template<class T >Any operator>>=(T) const {}
          operator bool() {return false;}
        };

        class XInterface {
        public :
          template <class T> Any queryInterface(T) {}
        };

        template<class T> class Sequence {
        public:
          int getLength() {}
          T operator [] (int x) {}
        };

        enum extra { UNO_QUERY }; 
 
        class Exception {};

        class RuntimeException : Exception {};


        template <class T> class Reference {
        public:
          Reference() {}
          Reference(T&) {}
          Reference(T*) {}
          Reference(Reference<T>, extra){}
          template <class U> Reference(Reference<U>, extra) {}
          template <class U> Reference(Reference<U>) {}
          template <class U> Reference(U*&) {}
          T * operator ->  () const  {}
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


      };
    };
  };
};

namespace cppu {
  template <class T> class WeakImplHelper1 : public T{};
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
      namespace lang {
        class Locale {};
        class EventObject {};
        class IndexOutOfBoundsException {};
        class IllegalArgumentException {};
      };
    };
  };
};

using namespace com::sun::star::uno;

namespace com {
  namespace sun { 
    namespace star{ 


      namespace beans {
        class PropertyValue {};
      };

      namespace accessibility {
        //  com.sun.star.accessibility


        class AccessibleShape {};
        class IllegalAccessibleComponentStateException {};
        class TextSegment{
        public:
          int SegmentStart;
          int SegmentEnd;
        };
        class AccessibleTableModelChangeType {
        public:
          enum X {
            INSERT,
            DELETE,
            UPDATE,
          };
        };

        class AccessibleTableModelChange {
        public:
          int FirstRow;
          int LastRow;
          int FirstColumn;
          int LastColumn;
          AccessibleTableModelChangeType::X Type;

        };

        class XAccessibleContext;
        class XAccessibleTextSelection {};
        class XAccessibleExtendedAttributes {};
        class AccessibleEventId {
        public :
          enum X {
            ACTION_CHANGED,
            ACTIVE_DESCENDANT_CHANGED,
            BOUNDRECT_CHANGED,
            CARET_CHANGED,
            CHILD,
            CONTENT_FLOWS_FROM_RELATION_CHANGED,
            CONTENT_FLOWS_TO_RELATION_CHANGED,
            CONTROLLED_BY_RELATION_CHANGED,
            CONTROLLER_FOR_RELATION_CHANGED,
            DESCRIPTION_CHANGED,
            HYPERTEXT_CHANGED,
            INVALIDATE_ALL_CHILDREN,
            LABELED_BY_RELATION_CHANGED,
            LABEL_FOR_RELATION_CHANGED,
            LISTBOX_ENTRY_COLLAPSED,
            LISTBOX_ENTRY_EXPANDED,
            MEMBER_OF_RELATION_CHANGED,
            NAME_CHANGED,
            SELECTION_CHANGED,
            STATE_CHANGED,
            SUB_WINDOW_OF_RELATION_CHANGED,
            TABLE_CAPTION_CHANGED,
            TABLE_COLUMN_DESCRIPTION_CHANGED,
            TABLE_COLUMN_HEADER_CHANGED,
            TABLE_MODEL_CHANGED,
            TABLE_ROW_DESCRIPTION_CHANGED,
            TABLE_ROW_HEADER_CHANGED,
            TABLE_SUMMARY_CHANGED,
            TEXT_ATTRIBUTE_CHANGED,
            TEXT_CHANGED,
            TEXT_SELECTION_CHANGED,
            VALUE_CHANGED,
            VISIBLE_DATA_CHANGED,            
          };
          
        };

        class XAccessible : public XInterface{
        public:
          XAccessibleContext * getAccessibleContext() {}
          void release() {}
          void acquire() {}
        };

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
        class AccessibleEventObject {
        public :
          AccessibleEventId::X EventId;
          Any OldValue;
          Any NewValue;
          //Reference< accessibility::XAccessibleContext > Source;
          Reference< XInterface > Source;
        };


        class Set {
        public:
          int getLength() {}
          uno::Reference< accessibility::XAccessible > operator [] (int x) {}
        };

        class AccessibleRelationType {
        public :
          enum relation_type {
            CONTENT_FLOWS_FROM,
            CONTROLLED_BY,
            CONTROLLER_FOR,
            LABELED_BY,
            LABEL_FOR,
            MEMBER_OF,
            NODE_CHILD_OF,
            SUB_WINDOW_OF,
            CONTENT_FLOWS_TO
          };
        };

        class AccessibleRelation {
        public:

          AccessibleRelationType::relation_type RelationType;

          Set TargetSet;
          
        };
        
        class XAccessibleRelationSet {
        public : 
          AccessibleRelation getRelation(int n) {}
          int getRelationCount() {}
        };



 
       
        class AccessibleStateType {
        public :
          enum x { 
            ACTIVE,
            ARMED,
              BUSY ,
              DEFUNC,
              CHECKED ,
              EDITABLE ,
              ENABLED ,
              EXPANDABLE ,
              EXPANDED ,
              FOCUSABLE ,
              FOCUSED ,
              HORIZONTAL ,
              ICONIFIED ,
              INDETERMINATE ,
              INVALID ,
              MANAGES_DESCENDANTS ,
              MODAL ,
              MULTI_LINE ,
              MULTI_SELECTABLE,
              OPAQUE ,
              PRESSED ,
              RESIZABLE ,
              SELECTABLE ,
              SELECTED ,
              SENSITIVE ,
              SHOWING ,
              SINGLE_LINE ,
              STALE ,
              TRANSIENT ,
              VERTICAL ,
              VISIBLE 
            };
        };
       

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
class SwCrsrShell {} ;
class SwViewShell : public SwCrsrShell {
public :
  Window * GetWin() const {}
  template <class T> bool ISA(T) const{}
};
#define ISA(X) ISA(X())

class SwAccessibleMap{
public:
  SwViewShell * GetShell() const;
};

#define SAL_THROW 	( 	  	exc)		   throw exc

//#define SAL_THROW
//#define SAL_THROW(X) ;
// throws X

#define SVX_DLLPUBLIC
#define SAL_CALL 
class SwPaM {};

using namespace com::sun::star::awt;
template <class T> void OSL_ENSURE(T, const char * message){}


#include <acccontext.hxx>
#include <accfrmobj.hxx>







