#ifndef _sun_reflect_generics_visitor_Visitor_h_
#define _sun_reflect_generics_visitor_Visitor_h_
//$ interface sun.reflect.generics.visitor.Visitor
//$ extends sun.reflect.generics.visitor.TypeTreeVisitor

#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class ClassSignature;
				class MethodTypeSignature;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace visitor {

class Visitor : public ::sun::reflect::generics::visitor::TypeTreeVisitor {
	$interface(Visitor, $NO_CLASS_INIT, ::sun::reflect::generics::visitor::TypeTreeVisitor)
public:
	virtual void visitClassSignature(::sun::reflect::generics::tree::ClassSignature* cs) {}
	virtual void visitMethodTypeSignature(::sun::reflect::generics::tree::MethodTypeSignature* ms) {}
};

			} // visitor
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_visitor_Visitor_h_