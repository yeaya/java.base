#ifndef _java_util_zip_ZipFile$CleanableResource_h_
#define _java_util_zip_ZipFile$CleanableResource_h_
//$ class java.util.zip.ZipFile$CleanableResource
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Cleaner$Cleanable;
		}
	}
}
namespace java {
	namespace util {
		class Deque;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Inflater;
			class ZipCoder;
			class ZipFile;
			class ZipFile$Source;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipFile$CleanableResource : public ::java::lang::Runnable {
	$class(ZipFile$CleanableResource, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ZipFile$CleanableResource();
	void init$(::java::util::zip::ZipFile* zf, ::java::util::zip::ZipCoder* zc, ::java::io::File* file, int32_t mode);
	virtual void clean();
	virtual ::java::util::zip::Inflater* getInflater();
	virtual void releaseInflater(::java::util::zip::Inflater* inf);
	virtual void run() override;
	::java::util::Set* istreams = nullptr;
	::java::util::Deque* inflaterCache = nullptr;
	::java::lang::ref::Cleaner$Cleanable* cleanable = nullptr;
	::java::util::zip::ZipFile$Source* zsrc = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipFile$CleanableResource_h_