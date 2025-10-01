#ifndef _sun_reflect_generics_visitor_Reifier_h_
#define _sun_reflect_generics_visitor_Reifier_h_
//$ class sun.reflect.generics.visitor.Reifier
//$ extends sun.reflect.generics.visitor.TypeTreeVisitor

#include <java/lang/Array.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace factory {
				class GenericsFactory;
			}
		}
	}
}
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
				class TypeArgument;
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

class Reifier : public ::sun::reflect::generics::visitor::TypeTreeVisitor {
	$class(Reifier, 0, ::sun::reflect::generics::visitor::TypeTreeVisitor)
public:
	Reifier();
	void init$(::sun::reflect::generics::factory::GenericsFactory* f);
	::sun::reflect::generics::factory::GenericsFactory* getFactory();
	virtual $Object* getResult() override;
	static ::sun::reflect::generics::visitor::Reifier* make(::sun::reflect::generics::factory::GenericsFactory* f);
	$Array<::java::lang::reflect::Type>* reifyTypeArguments($Array<::sun::reflect::generics::tree::TypeArgument>* tas);
	virtual void visitArrayTypeSignature(::sun::reflect::generics::tree::ArrayTypeSignature* a) override;
	virtual void visitBooleanSignature(::sun::reflect::generics::tree::BooleanSignature* b) override;
	virtual void visitBottomSignature(::sun::reflect::generics::tree::BottomSignature* b) override;
	virtual void visitByteSignature(::sun::reflect::generics::tree::ByteSignature* b) override;
	virtual void visitCharSignature(::sun::reflect::generics::tree::CharSignature* c) override;
	virtual void visitClassTypeSignature(::sun::reflect::generics::tree::ClassTypeSignature* ct) override;
	virtual void visitDoubleSignature(::sun::reflect::generics::tree::DoubleSignature* d) override;
	virtual void visitFloatSignature(::sun::reflect::generics::tree::FloatSignature* f) override;
	virtual void visitFormalTypeParameter(::sun::reflect::generics::tree::FormalTypeParameter* ftp) override;
	virtual void visitIntSignature(::sun::reflect::generics::tree::IntSignature* i) override;
	virtual void visitLongSignature(::sun::reflect::generics::tree::LongSignature* l) override;
	virtual void visitShortSignature(::sun::reflect::generics::tree::ShortSignature* s) override;
	virtual void visitSimpleClassTypeSignature(::sun::reflect::generics::tree::SimpleClassTypeSignature* sct) override;
	virtual void visitTypeVariableSignature(::sun::reflect::generics::tree::TypeVariableSignature* tv) override;
	virtual void visitVoidDescriptor(::sun::reflect::generics::tree::VoidDescriptor* v) override;
	virtual void visitWildcard(::sun::reflect::generics::tree::Wildcard* w) override;
	static bool $assertionsDisabled;
	::java::lang::reflect::Type* resultType = nullptr;
	::sun::reflect::generics::factory::GenericsFactory* factory = nullptr;
};

			} // visitor
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_visitor_Reifier_h_