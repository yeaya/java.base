#ifndef _java_lang_invoke_LambdaFormBuffer_h_
#define _java_lang_invoke_LambdaFormBuffer_h_
//$ class java.lang.invoke.LambdaFormBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("F_OWNED")
#undef F_OWNED
#pragma push_macro("F_TRANS")
#undef F_TRANS

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
			class LambdaForm$Name;
			class LambdaForm$NamedFunction;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class List;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaFormBuffer : public ::java::lang::Object {
	$class(LambdaFormBuffer, 0, ::java::lang::Object)
public:
	LambdaFormBuffer();
	void init$(::java::lang::invoke::LambdaForm* lf);
	void changeName(int32_t i, ::java::lang::invoke::LambdaForm$Name* name);
	void clearDuplicatesAndNulls();
	$Array<::java::lang::invoke::LambdaForm$Name>* copyNamesInto($Array<::java::lang::invoke::LambdaForm$Name>* buffer);
	::java::lang::invoke::LambdaForm* endEdit();
	void growNames(int32_t insertPos, int32_t growLength);
	bool inTrans();
	static int32_t indexOf(::java::lang::invoke::LambdaForm$NamedFunction* fn, ::java::util::List* fns);
	static int32_t indexOf(::java::lang::invoke::LambdaForm$Name* n, $Array<::java::lang::invoke::LambdaForm$Name>* ns);
	::java::lang::invoke::LambdaFormBuffer* insertExpression(int32_t pos, ::java::lang::invoke::LambdaForm$Name* expr);
	void insertName(int32_t pos, ::java::lang::invoke::LambdaForm$Name* expr, bool isParameter);
	::java::lang::invoke::LambdaFormBuffer* insertParameter(int32_t pos, ::java::lang::invoke::LambdaForm$Name* param);
	::java::lang::invoke::LambdaForm* lambdaForm();
	int32_t lastIndexOf(::java::lang::invoke::LambdaForm$Name* n);
	::java::lang::invoke::LambdaForm$Name* name(int32_t i);
	$Array<::java::lang::invoke::LambdaForm$Name>* nameArray();
	void noteDuplicate(int32_t pos1, int32_t pos2);
	int32_t ownedCount();
	::java::lang::invoke::LambdaFormBuffer* renameParameter(int32_t pos, ::java::lang::invoke::LambdaForm$Name* newParam);
	::java::lang::invoke::LambdaFormBuffer* replaceFunctions(::java::util::List* oldFns, ::java::util::List* newFns, $ObjectArray* forArguments);
	void replaceName(int32_t pos, ::java::lang::invoke::LambdaForm$Name* binding);
	::java::lang::invoke::LambdaFormBuffer* replaceParameterByCopy(int32_t pos, int32_t valuePos);
	::java::lang::invoke::LambdaFormBuffer* replaceParameterByNewExpression(int32_t pos, ::java::lang::invoke::LambdaForm$Name* binding);
	int32_t resultIndex();
	void setNames($Array<::java::lang::invoke::LambdaForm$Name>* names2);
	void setResult(::java::lang::invoke::LambdaForm$Name* name);
	void startEdit();
	bool verifyArity();
	bool verifyFirstChange();
	static bool $assertionsDisabled;
	int32_t arity = 0;
	int32_t length = 0;
	$Array<::java::lang::invoke::LambdaForm$Name>* names = nullptr;
	$Array<::java::lang::invoke::LambdaForm$Name>* originalNames = nullptr;
	int8_t flags = 0;
	int32_t firstChange = 0;
	::java::lang::invoke::LambdaForm$Name* resultName = nullptr;
	::java::util::ArrayList* dups = nullptr;
	static const int32_t F_TRANS = 16;
	static const int32_t F_OWNED = 3;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("F_OWNED")
#pragma pop_macro("F_TRANS")

#endif // _java_lang_invoke_LambdaFormBuffer_h_