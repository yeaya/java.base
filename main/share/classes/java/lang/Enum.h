#ifndef _java_lang_Enum_h_
#define _java_lang_Enum_h_
//$ class java.lang.Enum
//$ extends java.lang.constant.Constable
//$ implements java.lang.Comparable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/lang/constant/Constable.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Enum$EnumDesc;
	}
}
namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {

class $export Enum : public ::java::lang::constant::Constable, public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(Enum, $PRELOAD | $NO_CLASS_INIT, ::java::lang::constant::Constable, ::java::lang::Comparable, ::java::io::Serializable)
public:
	Enum();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	void init$($String* name, int32_t ordinal);
	virtual $Object* clone() override;
	int32_t compareTo(::java::lang::Enum* o);
	virtual int32_t compareTo(Object$* o) override;
	virtual ::java::util::Optional* describeConstable() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	$Class* getDeclaringClass();
	virtual int32_t hashCode() override;
	::java::lang::Enum$EnumDesc* lambda$describeConstable$0(::java::lang::constant::ClassDesc* c);
	$String* name();
	int32_t ordinal();
	void readObject(::java::io::ObjectInputStream* in);
	void readObjectNoData();
	virtual $String* toString() override;
	static ::java::lang::Enum* valueOf($Class* enumClass, $String* name);
	$String* name$ = nullptr;
	int32_t ordinal$ = 0;
};

	} // lang
} // java

#endif // _java_lang_Enum_h_