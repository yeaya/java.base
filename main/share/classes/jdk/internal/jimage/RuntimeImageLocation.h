#ifndef _jdk_internal_jimage_RuntimeImageLocation_h_
#define _jdk_internal_jimage_RuntimeImageLocation_h_
//$ class jdk.internal.jimage.RuntimeImageLocation
//$ extends jdk.internal.jimage.ImageLocation

#include <java/lang/Array.h>
#include <jdk/internal/jimage/ImageLocation.h>

namespace jdk {
	namespace internal {
		namespace jimage {
			class ImageStrings;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class $export RuntimeImageLocation : public ::jdk::internal::jimage::ImageLocation {
	$class(RuntimeImageLocation, $NO_CLASS_INIT, ::jdk::internal::jimage::ImageLocation)
public:
	RuntimeImageLocation();
	using ::jdk::internal::jimage::ImageLocation::getFullName;
	void init$($longs* attributes, ::jdk::internal::jimage::ImageStrings* strings);
	virtual $String* buildName(bool includeModule, bool includeParent, bool includeName) override;
	virtual $String* getBase() override;
	virtual int64_t getCompressedSize() override;
	virtual $String* getExtension() override;
	virtual $String* getFullName(bool modulesPrefix) override;
	virtual $String* getModule() override;
	virtual $String* getParent() override;
	virtual int64_t getUncompressedSize() override;
	int64_t location = 0;
	int64_t size = 0;
	$String* module = nullptr;
	$String* parent = nullptr;
	$String* base = nullptr;
	$String* extension = nullptr;
	$StringArray* children = nullptr;
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_RuntimeImageLocation_h_