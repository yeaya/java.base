#ifndef _java_util_HashMap$ValueIterator_h_
#define _java_util_HashMap$ValueIterator_h_
//$ class java.util.HashMap$ValueIterator
//$ extends java.util.HashMap$HashIterator
//$ implements java.util.Iterator

#include <java/util/HashMap$HashIterator.h>
#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class HashMap;
	}
}

namespace java {
	namespace util {

class $export HashMap$ValueIterator : public ::java::util::HashMap$HashIterator, public ::java::util::Iterator {
	$class(HashMap$ValueIterator, $PRELOAD | $NO_CLASS_INIT, ::java::util::HashMap$HashIterator, ::java::util::Iterator)
public:
	HashMap$ValueIterator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual bool hasNext() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::HashMap* this$0);
	virtual $Object* next() override;
	virtual void remove() override;
	virtual $String* toString() override;
	::java::util::HashMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_HashMap$ValueIterator_h_