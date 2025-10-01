#ifndef _java_lang_invoke_LambdaFormEditor$Transform_h_
#define _java_lang_invoke_LambdaFormEditor$Transform_h_
//$ class java.lang.invoke.LambdaFormEditor$Transform
//$ extends java.lang.ref.SoftReference

#include <java/lang/Array.h>
#include <java/lang/ref/SoftReference.h>

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
			class LambdaFormEditor$TransformKey;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaFormEditor$Transform : public ::java::lang::ref::SoftReference {
	$class(LambdaFormEditor$Transform, 0, ::java::lang::ref::SoftReference)
public:
	LambdaFormEditor$Transform();
	void init$(int64_t packedBytes, $bytes* fullBytes, ::java::lang::invoke::LambdaForm* result);
	virtual bool equals(Object$* obj) override;
	bool equals(::java::lang::invoke::LambdaFormEditor$TransformKey* that);
	bool equals(::java::lang::invoke::LambdaFormEditor$Transform* that);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	int64_t packedBytes = 0;
	$bytes* fullBytes = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_LambdaFormEditor$Transform_h_