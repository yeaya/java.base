#ifndef _java_nio_file_FileStore_h_
#define _java_nio_file_FileStore_h_
//$ class java.nio.file.FileStore
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileStoreAttributeView;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class $import FileStore : public ::java::lang::Object {
	$class(FileStore, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileStore();
	void init$();
	virtual $Object* getAttribute($String* attribute) {return nullptr;}
	virtual int64_t getBlockSize();
	virtual ::java::nio::file::attribute::FileStoreAttributeView* getFileStoreAttributeView($Class* type) {return nullptr;}
	virtual int64_t getTotalSpace() {return 0;}
	virtual int64_t getUnallocatedSpace() {return 0;}
	virtual int64_t getUsableSpace() {return 0;}
	virtual bool isReadOnly() {return false;}
	virtual $String* name() {return nullptr;}
	virtual bool supportsFileAttributeView($Class* type) {return false;}
	virtual bool supportsFileAttributeView($String* name) {return false;}
	virtual $String* type() {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileStore_h_