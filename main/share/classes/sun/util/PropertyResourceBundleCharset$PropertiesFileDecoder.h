#ifndef _sun_util_PropertyResourceBundleCharset$PropertiesFileDecoder_h_
#define _sun_util_PropertyResourceBundleCharset$PropertiesFileDecoder_h_
//$ class sun.util.PropertyResourceBundleCharset$PropertiesFileDecoder
//$ extends java.nio.charset.CharsetDecoder

#include <java/nio/charset/CharsetDecoder.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CoderResult;
		}
	}
}
namespace sun {
	namespace util {
		class PropertyResourceBundleCharset;
	}
}

namespace sun {
	namespace util {

class PropertyResourceBundleCharset$PropertiesFileDecoder : public ::java::nio::charset::CharsetDecoder {
	$class(PropertyResourceBundleCharset$PropertiesFileDecoder, 0, ::java::nio::charset::CharsetDecoder)
public:
	PropertyResourceBundleCharset$PropertiesFileDecoder();
	void init$(::sun::util::PropertyResourceBundleCharset* this$0, ::java::nio::charset::Charset* cs, float averageCharsPerByte, float maxCharsPerByte);
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* in, ::java::nio::CharBuffer* out) override;
	::sun::util::PropertyResourceBundleCharset* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::nio::charset::CharsetDecoder* cdUTF_8 = nullptr;
	::java::nio::charset::CharsetDecoder* cdISO_8859_1 = nullptr;
};

	} // util
} // sun

#endif // _sun_util_PropertyResourceBundleCharset$PropertiesFileDecoder_h_