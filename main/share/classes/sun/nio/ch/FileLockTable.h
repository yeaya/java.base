#ifndef _sun_nio_ch_FileLockTable_h_
#define _sun_nio_ch_FileLockTable_h_
//$ class sun.nio.ch.FileLockTable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
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
			class Channel;
			class FileLock;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
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

class FileLockTable : public ::java::lang::Object {
	$class(FileLockTable, 0, ::java::lang::Object)
public:
	FileLockTable();
	void init$(::java::nio::channels::Channel* channel, ::java::io::FileDescriptor* fd);
	virtual void add(::java::nio::channels::FileLock* fl);
	void checkList(::java::util::List* list, int64_t position, int64_t size);
	virtual void remove(::java::nio::channels::FileLock* fl);
	virtual ::java::util::List* removeAll();
	void removeKeyIfEmpty(::sun::nio::ch::FileKey* fk, ::java::util::List* list);
	void removeStaleEntries();
	virtual void replace(::java::nio::channels::FileLock* fromLock, ::java::nio::channels::FileLock* toLock);
	static bool $assertionsDisabled;
	static ::java::util::concurrent::ConcurrentHashMap* lockMap;
	static ::java::lang::ref::ReferenceQueue* queue;
	::java::nio::channels::Channel* channel = nullptr;
	::sun::nio::ch::FileKey* fileKey = nullptr;
	::java::util::Set* locks = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_FileLockTable_h_