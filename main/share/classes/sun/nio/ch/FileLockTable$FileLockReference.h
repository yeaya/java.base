#ifndef _sun_nio_ch_FileLockTable$FileLockReference_h_
#define _sun_nio_ch_FileLockTable$FileLockReference_h_
//$ class sun.nio.ch.FileLockTable$FileLockReference
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileLock;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class FileKey;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class FileLockTable$FileLockReference : public ::java::lang::ref::WeakReference {
	$class(FileLockTable$FileLockReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	FileLockTable$FileLockReference();
	void init$(::java::nio::channels::FileLock* referent, ::java::lang::ref::ReferenceQueue* queue, ::sun::nio::ch::FileKey* key);
	virtual ::sun::nio::ch::FileKey* fileKey();
	::sun::nio::ch::FileKey* fileKey$ = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_FileLockTable$FileLockReference_h_