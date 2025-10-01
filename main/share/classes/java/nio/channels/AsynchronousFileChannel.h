#ifndef _java_nio_channels_AsynchronousFileChannel_h_
#define _java_nio_channels_AsynchronousFileChannel_h_
//$ class java.nio.channels.AsynchronousFileChannel
//$ extends java.nio.channels.AsynchronousChannel

#include <java/lang/Array.h>
#include <java/nio/channels/AsynchronousChannel.h>

#pragma push_macro("NO_ATTRIBUTES")
#undef NO_ATTRIBUTES

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class CompletionHandler;
			class FileLock;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class OpenOption;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileAttribute;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
			class Future;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export AsynchronousFileChannel : public ::java::nio::channels::AsynchronousChannel {
	$class(AsynchronousFileChannel, 0, ::java::nio::channels::AsynchronousChannel)
public:
	AsynchronousFileChannel();
	void init$();
	virtual void force(bool metaData) {}
	virtual void lock(int64_t position, int64_t size, bool shared, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	void lock(Object$* attachment, ::java::nio::channels::CompletionHandler* handler);
	virtual ::java::util::concurrent::Future* lock(int64_t position, int64_t size, bool shared) {return nullptr;}
	::java::util::concurrent::Future* lock();
	static ::java::nio::channels::AsynchronousFileChannel* open(::java::nio::file::Path* file, ::java::util::Set* options, ::java::util::concurrent::ExecutorService* executor, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static ::java::nio::channels::AsynchronousFileChannel* open(::java::nio::file::Path* file, $Array<::java::nio::file::OpenOption>* options);
	virtual void read(::java::nio::ByteBuffer* dst, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	virtual ::java::util::concurrent::Future* read(::java::nio::ByteBuffer* dst, int64_t position) {return nullptr;}
	virtual int64_t size() {return 0;}
	virtual ::java::nio::channels::AsynchronousFileChannel* truncate(int64_t size) {return nullptr;}
	virtual ::java::nio::channels::FileLock* tryLock(int64_t position, int64_t size, bool shared) {return nullptr;}
	::java::nio::channels::FileLock* tryLock();
	virtual void write(::java::nio::ByteBuffer* src, int64_t position, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {}
	virtual ::java::util::concurrent::Future* write(::java::nio::ByteBuffer* src, int64_t position) {return nullptr;}
	static $Array<::java::nio::file::attribute::FileAttribute>* NO_ATTRIBUTES;
};

		} // channels
	} // nio
} // java

#pragma pop_macro("NO_ATTRIBUTES")

#endif // _java_nio_channels_AsynchronousFileChannel_h_