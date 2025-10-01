#ifndef _java_util_Map$Entry_h_
#define _java_util_Map$Entry_h_
//$ interface java.util.Map$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}
namespace java {
	namespace util {
		class Comparator;
	}
}

namespace java {
	namespace util {

class $export Map$Entry : public ::java::lang::Object {
	$interface(Map$Entry, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	static ::java::util::Comparator* comparingByKey();
	static ::java::util::Comparator* comparingByKey(::java::util::Comparator* cmp);
	static ::java::util::Comparator* comparingByValue();
	static ::java::util::Comparator* comparingByValue(::java::util::Comparator* cmp);
	static ::java::util::Map$Entry* copyOf(::java::util::Map$Entry* e);
	virtual bool equals(Object$* o) override;
	virtual $Object* getKey() {return nullptr;}
	virtual $Object* getValue() {return nullptr;}
	virtual int32_t hashCode() override;
	static int32_t lambda$comparingByKey$6d558cbf$1(::java::util::Comparator* cmp, ::java::util::Map$Entry* c1, ::java::util::Map$Entry* c2);
	static int32_t lambda$comparingByKey$bbdbfea9$1(::java::util::Map$Entry* c1, ::java::util::Map$Entry* c2);
	static int32_t lambda$comparingByValue$1065357e$1(::java::util::Map$Entry* c1, ::java::util::Map$Entry* c2);
	static int32_t lambda$comparingByValue$827a17d5$1(::java::util::Comparator* cmp, ::java::util::Map$Entry* c1, ::java::util::Map$Entry* c2);
	virtual $Object* setValue(Object$* value) {return nullptr;}
};

	} // util
} // java

#endif // _java_util_Map$Entry_h_