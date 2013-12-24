#pragma once 
using namespace com::sun::star::uno;

namespace com {
  namespace sun { 
    namespace star{ 
      namespace accessibility {
        class XAccessibleContext;

        class XAccessible : public XInterface{
        public:
          XAccessibleContext * getAccessibleContext();
          void release();
          void acquire();
        };

        class XAccessibleAction     : public XAccessible    {};
        class XAccessibleComponent  : public XAccessible    {};
        class XAccessibleEditableText : public XAccessible  {};
        class XAccessibleHypertext    : public XAccessible  {};
        class XAccessibleImage         : public XAccessible  {};
        class XAccessibleMultiLineText : public XAccessible {};
        class XAccessibleSelection   : public XAccessible   {};
        class XAccessibleTable        : public XAccessible  {};
        class XAccessibleText          : public XAccessible {};
        class XAccessibleTextMarkup    : public XAccessible {};
        class XAccessibleTextAttributes : public XAccessible {};
        class XAccessibleValue        : public XAccessible  {};
        class XAccessibleEventListener {
        public :
          //  XAccessibleEventListener(AtkListener*);
          
        };
        class AccessibleEventObject {};


        class Set {
        public:
          int getLength();
          uno::Reference< accessibility::XAccessible > operator [] (int x);
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
          AccessibleRelation getRelation(int n);
          int getRelationCount();
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
              EDIT_BAR,
              CAPTION,
              CHART,
              DOCUMENT,
              EMBEDDED_OBJECT,
              END_NOTE,
              FOOTNOTE,
              FORM,
              GROUP_BOX,
              HEADING,
              HYPER_LINK,
              IMAGE_MAP,
              NOTE,
              PAGE,
              SECTION,
              SHAPE,
              TEXT_FRAME,
              TREE_ITEM};
        };

        class XAccessibleStateSet {
        public:
          uno::Sequence< sal_Int16 > getStates();
          template <class T> bool contains(T);
        };
        class XAccessibleEventBroadcaster {
        public :
          template <class T> void addAccessibleEventListener(T);
        };

        class XAccessibleContext : public XAccessible {
        public:
          OUString getAccessibleName();
          OUString getAccessibleDescription();
          int getAccessibleChildCount();
          Reference<XAccessible>
          getAccessibleChild( int i );
          int getAccessibleIndexInParent();
          Reference<XAccessibleRelationSet> getAccessibleRelationSet();
          Reference<XAccessibleStateSet>     getAccessibleStateSet ();
          AccessibleRole::role getAccessibleRole();
          Reference<accessibility::XAccessible> getAccessibleParent();
        };
      };
    };
  };
};


//enum AtkRole;

template <class T> int SAL_N_ELEMENTS(T [] );
template <class T> void OSL_FAIL(T);
template <class T> void OSL_ASSERT(T);

