#ifndef _java_util_EnumSet_h_
#define _java_util_EnumSet_h_
//$ class java.util.EnumSet
//$ extends java.util.AbstractSet
//$ implements java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractSet.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Enum;
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}

namespace java {
	namespace util {

class $export EnumSet : public ::java::util::AbstractSet, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(EnumSet, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractSet, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	EnumSet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::AbstractSet::addAll;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Class* elementType, $Array<::java::lang::Enum>* universe);
	virtual void addAll() {}
	virtual void addRange(::java::lang::Enum* from, ::java::lang::Enum* to) {}
	static ::java::util::EnumSet* allOf($Class* elementType);
	virtual $Object* clone() override;
	virtual void complement() {}
	static ::java::util::EnumSet* complementOf(::java::util::EnumSet* s);
	static ::java::util::EnumSet* copyOf(::java::util::EnumSet* s);
	static ::java::util::EnumSet* copyOf(::java::util::Collection* c);
	static $Array<::java::lang::Enum>* getUniverse($Class* elementType);
	static ::java::util::EnumSet* noneOf($Class* elementType);
	static ::java::util::EnumSet* of(::java::lang::Enum* e);
	static ::java::util::EnumSet* of(::java::lang::Enum* e1, ::java::lang::Enum* e2);
	static ::java::util::EnumSet* of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3);
	static ::java::util::EnumSet* of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3, ::java::lang::Enum* e4);
	static ::java::util::EnumSet* of(::java::lang::Enum* e1, ::java::lang::Enum* e2, ::java::lang::Enum* e3, ::java::lang::Enum* e4, ::java::lang::Enum* e5);
	static ::java::util::EnumSet* of(::java::lang::Enum* first, $Array<::java::lang::Enum>* rest);
	static ::java::util::EnumSet* range(::java::lang::Enum* from, ::java::lang::Enum* to);
	void readObject(::java::io::ObjectInputStream* s);
	void readObjectNoData();
	using ::java::util::AbstractSet::toArray;
	virtual $String* toString() override;
	void typeCheck(::java::lang::Enum* e);
	virtual $Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x0E03216ACD8C29DD;
	$Class* elementType = nullptr;
	$Array<::java::lang::Enum>* universe = nullptr;
};

	} // util
} // java

#endif // _java_util_EnumSet_h_