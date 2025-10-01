#ifndef _sun_reflect_generics_parser_SignatureParser_h_
#define _sun_reflect_generics_parser_SignatureParser_h_
//$ class sun.reflect.generics.parser.SignatureParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("EOI")
#undef EOI

namespace java {
	namespace lang {
		class Error;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class ArrayTypeSignature;
				class BaseType;
				class ClassSignature;
				class ClassTypeSignature;
				class FieldTypeSignature;
				class FormalTypeParameter;
				class MethodTypeSignature;
				class ReturnType;
				class SimpleClassTypeSignature;
				class TypeArgument;
				class TypeSignature;
				class TypeVariableSignature;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace parser {

class $import SignatureParser : public ::java::lang::Object {
	$class(SignatureParser, 0, ::java::lang::Object)
public:
	SignatureParser();
	void init$();
	void advance();
	char16_t current();
	::java::lang::Error* error($String* errorMsg);
	void init($String* s);
	static ::sun::reflect::generics::parser::SignatureParser* make();
	void mark();
	$String* markToCurrent();
	::sun::reflect::generics::tree::ArrayTypeSignature* parseArrayTypeSignature();
	::sun::reflect::generics::tree::BaseType* parseBaseType();
	$Array<::sun::reflect::generics::tree::FieldTypeSignature>* parseBounds();
	virtual ::sun::reflect::generics::tree::ClassSignature* parseClassSig($String* s);
	::sun::reflect::generics::tree::ClassSignature* parseClassSignature();
	::sun::reflect::generics::tree::ClassTypeSignature* parseClassTypeSignature();
	void parseClassTypeSignatureSuffix(::java::util::List* scts);
	::sun::reflect::generics::tree::FieldTypeSignature* parseFieldTypeSignature();
	::sun::reflect::generics::tree::FieldTypeSignature* parseFieldTypeSignature(bool allowArrays);
	$Array<::sun::reflect::generics::tree::TypeSignature>* parseFormalParameters();
	::sun::reflect::generics::tree::FormalTypeParameter* parseFormalTypeParameter();
	$Array<::sun::reflect::generics::tree::FormalTypeParameter>* parseFormalTypeParameters();
	$String* parseIdentifier();
	virtual ::sun::reflect::generics::tree::MethodTypeSignature* parseMethodSig($String* s);
	::sun::reflect::generics::tree::MethodTypeSignature* parseMethodTypeSignature();
	::sun::reflect::generics::tree::SimpleClassTypeSignature* parsePackageNameAndSimpleClassTypeSignature();
	::sun::reflect::generics::tree::ReturnType* parseReturnType();
	::sun::reflect::generics::tree::SimpleClassTypeSignature* parseSimpleClassTypeSignature(bool dollar);
	$Array<::sun::reflect::generics::tree::ClassTypeSignature>* parseSuperInterfaces();
	::sun::reflect::generics::tree::FieldTypeSignature* parseThrowsSignature();
	::sun::reflect::generics::tree::TypeArgument* parseTypeArgument();
	$Array<::sun::reflect::generics::tree::TypeArgument>* parseTypeArguments();
	virtual ::sun::reflect::generics::tree::TypeSignature* parseTypeSig($String* s);
	::sun::reflect::generics::tree::TypeSignature* parseTypeSignature();
	::sun::reflect::generics::tree::TypeVariableSignature* parseTypeVariableSignature();
	$Array<::sun::reflect::generics::tree::FormalTypeParameter>* parseZeroOrMoreFormalTypeParameters();
	$Array<::sun::reflect::generics::tree::FieldTypeSignature>* parseZeroOrMoreThrowsSignatures();
	$Array<::sun::reflect::generics::tree::TypeSignature>* parseZeroOrMoreTypeSignatures();
	void progress(int32_t startingPosition);
	$String* remainder();
	void skipIdentifier();
	static bool $assertionsDisabled;
	$String* input = nullptr;
	int32_t index = 0;
	int32_t mark$ = 0;
	static const char16_t EOI = ((char16_t)58);
	static const bool DEBUG = false;
};

			} // parser
		} // generics
	} // reflect
} // sun

#pragma pop_macro("DEBUG")
#pragma pop_macro("EOI")

#endif // _sun_reflect_generics_parser_SignatureParser_h_