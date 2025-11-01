#ifndef _java_lang_Boolean_h_
#define _java_lang_Boolean_h_
//$ class java.lang.Boolean
//$ extends java.io.Serializable
//$ implements java.lang.Comparable,java.lang.constant.Constable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/lang/constant/Constable.h>

#pragma push_macro("FALSE")
#undef FALSE
#pragma push_macro("TRUE")
#undef TRUE
#pragma push_macro("TYPE")
#undef TYPE

namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {

class $export Boolean : public ::java::io::Serializable, public ::java::lang::Comparable, public ::java::lang::constant::Constable {
	$class(Boolean, $PRELOAD, ::java::io::Serializable, ::java::lang::Comparable, ::java::lang::constant::Constable)
public:
	Boolean();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(bool value);
	void init$($String* s);
	bool booleanValue();
	static int32_t compare(bool x, bool y);
	int32_t compareTo(::java::lang::Boolean* b);
	virtual int32_t compareTo(Object$* b) override;
	virtual ::java::util::Optional* describeConstable() override;
	virtual bool equals(Object$* obj) override;
	static bool getBoolean($String* name);
	virtual int32_t hashCode() override;
	static int32_t hashCode(bool value);
	static bool logicalAnd(bool a, bool b);
	static bool logicalOr(bool a, bool b);
	static bool logicalXor(bool a, bool b);
	static bool parseBoolean($String* s);
	static $String* toString(bool b);
	virtual $String* toString() override;
	static ::java::lang::Boolean* valueOf(bool b);
	static ::java::lang::Boolean* valueOf($String* s);
	static ::java::lang::Boolean* TRUE;
	static ::java::lang::Boolean* FALSE;
	static $Class* TYPE;
	bool value = false;
	static const int64_t serialVersionUID = (int64_t)0xCD207280D59CFAEE;
};

	} // lang
} // java

#pragma pop_macro("FALSE")
#pragma pop_macro("TRUE")
#pragma pop_macro("TYPE")

#endif // _java_lang_Boolean_h_