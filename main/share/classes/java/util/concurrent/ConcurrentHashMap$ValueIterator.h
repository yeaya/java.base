#ifndef _java_util_concurrent_ConcurrentHashMap$ValueIterator_h_
#define _java_util_concurrent_ConcurrentHashMap$ValueIterator_h_
//$ class java.util.concurrent.ConcurrentHashMap$ValueIterator
//$ extends java.util.concurrent.ConcurrentHashMap$BaseIterator
//$ implements java.util.Iterator,java.util.Enumeration

#include <java/lang/Array.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/ConcurrentHashMap$BaseIterator.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
			class ConcurrentHashMap$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$ValueIterator : public ::java::util::concurrent::ConcurrentHashMap$BaseIterator, public ::java::util::Iterator, public ::java::util::Enumeration {
	$class(ConcurrentHashMap$ValueIterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$BaseIterator, ::java::util::Iterator, ::java::util::Enumeration)
public:
	ConcurrentHashMap$ValueIterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual bool hasMoreElements() override;
	virtual bool hasNext() override;
	virtual int32_t hashCode() override;
	void init$($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, int32_t size, int32_t index, int32_t limit, ::java::util::concurrent::ConcurrentHashMap* map);
	virtual $Object* next() override;
	virtual $Object* nextElement() override;
	virtual void remove() override;
	virtual $String* toString() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$ValueIterator_h_