#ifndef _sun_reflect_generics_visitor_TypeTreeVisitor_h_
#define _sun_reflect_generics_visitor_TypeTreeVisitor_h_
//$ interface sun.reflect.generics.visitor.TypeTreeVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class ArrayTypeSignature;
				class BooleanSignature;
				class BottomSignature;
				class ByteSignature;
				class CharSignature;
				class ClassTypeSignature;
				class DoubleSignature;
				class FloatSignature;
				class FormalTypeParameter;
				class IntSignature;
				class LongSignature;
				class ShortSignature;
				class SimpleClassTypeSignature;
				class TypeVariableSignature;
				class VoidDescriptor;
				class Wildcard;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace visitor {

class TypeTreeVisitor : public ::java::lang::Object {
	$interface(TypeTreeVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getResult() {return nullptr;}
	virtual void visitArrayTypeSignature(::sun::reflect::generics::tree::ArrayTypeSignature* a) {}
	virtual void visitBooleanSignature(::sun::reflect::generics::tree::BooleanSignature* b) {}
	virtual void visitBottomSignature(::sun::reflect::generics::tree::BottomSignature* b) {}
	virtual void visitByteSignature(::sun::reflect::generics::tree::ByteSignature* b) {}
	virtual void visitCharSignature(::sun::reflect::generics::tree::CharSignature* c) {}
	virtual void visitClassTypeSignature(::sun::reflect::generics::tree::ClassTypeSignature* ct) {}
	virtual void visitDoubleSignature(::sun::reflect::generics::tree::DoubleSignature* d) {}
	virtual void visitFloatSignature(::sun::reflect::generics::tree::FloatSignature* f) {}
	virtual void visitFormalTypeParameter(::sun::reflect::generics::tree::FormalTypeParameter* ftp) {}
	virtual void visitIntSignature(::sun::reflect::generics::tree::IntSignature* i) {}
	virtual void visitLongSignature(::sun::reflect::generics::tree::LongSignature* l) {}
	virtual void visitShortSignature(::sun::reflect::generics::tree::ShortSignature* s) {}
	virtual void visitSimpleClassTypeSignature(::sun::reflect::generics::tree::SimpleClassTypeSignature* sct) {}
	virtual void visitTypeVariableSignature(::sun::reflect::generics::tree::TypeVariableSignature* tv) {}
	virtual void visitVoidDescriptor(::sun::reflect::generics::tree::VoidDescriptor* v) {}
	virtual void visitWildcard(::sun::reflect::generics::tree::Wildcard* w) {}
};

			} // visitor
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_visitor_TypeTreeVisitor_h_