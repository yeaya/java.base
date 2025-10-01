#ifndef _jdk_internal_jimage_RuntimeImageReader_h_
#define _jdk_internal_jimage_RuntimeImageReader_h_
//$ class jdk.internal.jimage.RuntimeImageReader
//$ extends java.lang.AutoCloseable

#include <java/lang/Array.h>
#include <java/lang/AutoCloseable.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageReader$Directory;
			class ImageReader$LinkNode;
			class ImageReader$Node;
			class RuntimeImageLocation;
			class RuntimeImageReader$LocationVisitor;
			class RuntimeImageReader$Resource;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $export RuntimeImageReader : public ::java::lang::AutoCloseable {
	$class(RuntimeImageReader, 0, ::java::lang::AutoCloseable)
public:
	RuntimeImageReader();
	void init$();
	::jdk::internal::jimage::ImageReader$Node* buildNode($String* name);
	::jdk::internal::jimage::ImageReader$Directory* buildRootDirectory();
	virtual void close() override;
	void ensureOpen();
	::jdk::internal::jimage::RuntimeImageLocation* findLocation($String* mn, $String* rn);
	::jdk::internal::jimage::RuntimeImageLocation* findLocation($String* name);
	::jdk::internal::jimage::RuntimeImageLocation* findLocation0($String* mn, $String* rn);
	::jdk::internal::jimage::RuntimeImageLocation* findLocation0($String* name);
	::jdk::internal::jimage::ImageReader$Node* findNode($String* name);
	::jdk::internal::jimage::ImageReader$Node* findNode0($String* name);
	$String* getBaseExt(::jdk::internal::jimage::RuntimeImageLocation* loc);
	$StringArray* getModuleNames();
	$bytes* getResource(::jdk::internal::jimage::ImageReader$Node* node);
	$bytes* getResource(::jdk::internal::jimage::RuntimeImageReader$Resource* rs);
	$bytes* getResource0(::jdk::internal::jimage::RuntimeImageReader$Resource* resource);
	::jdk::internal::jimage::ImageReader$Directory* getRootDirectory();
	::jdk::internal::jimage::ImageReader$Node* handleModuleLink($String* name);
	::jdk::internal::jimage::ImageReader$Node* handleModulesSubTree($String* name, ::jdk::internal::jimage::RuntimeImageLocation* loc);
	::jdk::internal::jimage::ImageReader$Node* handlePackages($String* name, ::jdk::internal::jimage::RuntimeImageLocation* loc);
	::jdk::internal::jimage::ImageReader$Node* handleResource($String* name);
	::java::nio::file::attribute::BasicFileAttributes* imageFileAttributes();
	static $String* lambda$getModuleNames$0(int32_t off, $String* s);
	static $StringArray* lambda$getModuleNames$1(int32_t x$0);
	void lambda$handleModulesSubTree$3(::jdk::internal::jimage::ImageReader$Directory* dir, ::jdk::internal::jimage::RuntimeImageLocation* childloc);
	void lambda$handlePackages$2(::jdk::internal::jimage::RuntimeImageLocation* childloc);
	::jdk::internal::jimage::ImageReader$Directory* makeDirectories($String* parent);
	::jdk::internal::jimage::ImageReader$Directory* makeDirectory($String* dir, ::jdk::internal::jimage::ImageReader$Directory* last);
	::jdk::internal::jimage::ImageReader$Directory* newDirectory(::jdk::internal::jimage::ImageReader$Directory* parent, $String* name);
	::jdk::internal::jimage::ImageReader$LinkNode* newLinkNode(::jdk::internal::jimage::ImageReader$Directory* dir, $String* name, ::jdk::internal::jimage::ImageReader$Node* link);
	::jdk::internal::jimage::RuntimeImageReader$Resource* newResource(::jdk::internal::jimage::ImageReader$Directory* parent, ::jdk::internal::jimage::RuntimeImageLocation* loc);
	static ::jdk::internal::jimage::RuntimeImageReader* open();
	void requireOpen();
	void visitLocation(::jdk::internal::jimage::RuntimeImageLocation* loc, ::jdk::internal::jimage::RuntimeImageReader$LocationVisitor* visitor);
	void visitPackageLocation(::jdk::internal::jimage::RuntimeImageLocation* loc);
	static bool $assertionsDisabled;
	::java::nio::file::attribute::BasicFileAttributes* imageFileAttributes$ = nullptr;
	::java::util::HashMap* nodes = nullptr;
	$volatile(::jdk::internal::jimage::ImageReader$Directory*) rootDir = nullptr;
	::jdk::internal::jimage::ImageReader$Directory* packagesDir = nullptr;
	::jdk::internal::jimage::ImageReader$Directory* modulesDir = nullptr;
	$volatile(bool) closed = false;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_RuntimeImageReader_h_