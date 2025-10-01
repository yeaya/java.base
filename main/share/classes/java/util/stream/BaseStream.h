#ifndef _java_util_stream_BaseStream_h_
#define _java_util_stream_BaseStream_h_
//$ interface java.util.stream.BaseStream
//$ extends java.lang.AutoCloseable

#include <java/lang/AutoCloseable.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
	}
}

namespace java {
	namespace util {
		namespace stream {

class $export BaseStream : public ::java::lang::AutoCloseable {
	$interface(BaseStream, $PRELOAD | $NO_CLASS_INIT, ::java::lang::AutoCloseable)
public:
	virtual void close() override {}
	virtual bool isParallel() {return false;}
	virtual ::java::util::Iterator* iterator() {return nullptr;}
	virtual ::java::util::stream::BaseStream* onClose(::java::lang::Runnable* closeHandler) {return nullptr;}
	virtual ::java::util::stream::BaseStream* parallel() {return nullptr;}
	virtual ::java::util::stream::BaseStream* sequential() {return nullptr;}
	virtual ::java::util::Spliterator* spliterator() {return nullptr;}
	virtual ::java::util::stream::BaseStream* unordered() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_BaseStream_h_