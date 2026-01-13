#ifndef _jdk_internal_jimage_ImageReader$SharedImageReader_h_
#define _jdk_internal_jimage_ImageReader$SharedImageReader_h_
//$ class jdk.internal.jimage.ImageReader$SharedImageReader
//$ extends jdk.internal.jimage.BasicImageReader

#include <java/lang/Array.h>
#include <jdk/internal/jimage/BasicImageReader.h>

#pragma push_macro("OPEN_FILES")
#undef OPEN_FILES
#pragma push_macro("SIZE_OF_OFFSET")
#undef SIZE_OF_OFFSET

namespace java {
	namespace nio {
		class ByteOrder;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
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
		class Map;
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageLocation;
			class ImageReader;
			class ImageReader$Directory;
			class ImageReader$LinkNode;
			class ImageReader$Node;
			class ImageReader$Resource;
			class ImageReader$SharedImageReader$LocationVisitor;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class ImageReader$SharedImageReader : public ::jdk::internal::jimage::BasicImageReader {
	$class(ImageReader$SharedImageReader, 0, ::jdk::internal::jimage::BasicImageReader)
public:
	ImageReader$SharedImageReader();
	using ::jdk::internal::jimage::BasicImageReader::close;
	using ::jdk::internal::jimage::BasicImageReader::getResource;
	void init$(::java::nio::file::Path* imagePath, ::java::nio::ByteOrder* byteOrder);
	void addOpener(::jdk::internal::jimage::ImageReader* reader);
	::jdk::internal::jimage::ImageReader$Node* buildNode($String* name);
	::jdk::internal::jimage::ImageReader$Directory* buildRootDirectory();
	void close(::jdk::internal::jimage::ImageReader* image);
	::jdk::internal::jimage::ImageReader$Node* findNode($String* name);
	$String* getBaseExt(::jdk::internal::jimage::ImageLocation* loc);
	$bytes* getResource(::jdk::internal::jimage::ImageReader$Node* node);
	$bytes* getResource(::jdk::internal::jimage::ImageReader$Resource* rs);
	::jdk::internal::jimage::ImageReader$Directory* getRootDirectory();
	::jdk::internal::jimage::ImageReader$Node* handleModuleLink($String* name);
	::jdk::internal::jimage::ImageReader$Node* handleModulesSubTree($String* name, ::jdk::internal::jimage::ImageLocation* loc);
	::jdk::internal::jimage::ImageReader$Node* handlePackages($String* name, ::jdk::internal::jimage::ImageLocation* loc);
	::jdk::internal::jimage::ImageReader$Node* handleResource($String* name);
	::java::nio::file::attribute::BasicFileAttributes* imageFileAttributes();
	void lambda$handleModulesSubTree$1(::jdk::internal::jimage::ImageReader$Directory* dir, ::jdk::internal::jimage::ImageLocation* childloc);
	void lambda$handlePackages$0(::jdk::internal::jimage::ImageLocation* childloc);
	::jdk::internal::jimage::ImageReader$Directory* makeDirectories($String* parent);
	::jdk::internal::jimage::ImageReader$Directory* makeDirectory($String* dir, ::jdk::internal::jimage::ImageReader$Directory* last);
	::jdk::internal::jimage::ImageReader$Directory* newDirectory(::jdk::internal::jimage::ImageReader$Directory* parent, $String* name);
	::jdk::internal::jimage::ImageReader$LinkNode* newLinkNode(::jdk::internal::jimage::ImageReader$Directory* dir, $String* name, ::jdk::internal::jimage::ImageReader$Node* link);
	::jdk::internal::jimage::ImageReader$Resource* newResource(::jdk::internal::jimage::ImageReader$Directory* parent, ::jdk::internal::jimage::ImageLocation* loc);
	static ::jdk::internal::jimage::ImageReader* open(::java::nio::file::Path* imagePath, ::java::nio::ByteOrder* byteOrder);
	bool removeOpener(::jdk::internal::jimage::ImageReader* reader);
	void visitLocation(::jdk::internal::jimage::ImageLocation* loc, ::jdk::internal::jimage::ImageReader$SharedImageReader$LocationVisitor* visitor);
	void visitPackageLocation(::jdk::internal::jimage::ImageLocation* loc);
	static bool $assertionsDisabled;
	static const int32_t SIZE_OF_OFFSET = 4; // Integer.BYTES
	static ::java::util::Map* OPEN_FILES;
	::java::util::Set* openers = nullptr;
	::java::nio::file::attribute::BasicFileAttributes* imageFileAttributes$ = nullptr;
	::java::util::HashMap* nodes = nullptr;
	$volatile(::jdk::internal::jimage::ImageReader$Directory*) rootDir = nullptr;
	::jdk::internal::jimage::ImageReader$Directory* packagesDir = nullptr;
	::jdk::internal::jimage::ImageReader$Directory* modulesDir = nullptr;
};

		} // jimage
	} // internal
} // jdk

#pragma pop_macro("OPEN_FILES")
#pragma pop_macro("SIZE_OF_OFFSET")

#endif // _jdk_internal_jimage_ImageReader$SharedImageReader_h_