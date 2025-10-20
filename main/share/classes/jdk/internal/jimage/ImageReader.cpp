#include <jdk/internal/jimage/ImageReader.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/file/Path.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/jimage/BasicImageReader.h>
#include <jdk/internal/jimage/ImageHeader.h>
#include <jdk/internal/jimage/ImageLocation.h>
#include <jdk/internal/jimage/ImageReader$Directory.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jdk/internal/jimage/ImageReader$Resource.h>
#include <jdk/internal/jimage/ImageReader$SharedImageReader.h>
#include <jdk/internal/jimage/ImageStringsReader.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $Path = ::java::nio::file::Path;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Stream = ::java::util::stream::Stream;
using $BasicImageReader = ::jdk::internal::jimage::BasicImageReader;
using $ImageHeader = ::jdk::internal::jimage::ImageHeader;
using $ImageLocation = ::jdk::internal::jimage::ImageLocation;
using $ImageReader$Directory = ::jdk::internal::jimage::ImageReader$Directory;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;
using $ImageReader$Resource = ::jdk::internal::jimage::ImageReader$Resource;
using $ImageReader$SharedImageReader = ::jdk::internal::jimage::ImageReader$SharedImageReader;
using $ImageStringsReader = ::jdk::internal::jimage::ImageStringsReader;

namespace jdk {
	namespace internal {
		namespace jimage {

class ImageReader$$Lambda$getNameString : public $Function {
	$class(ImageReader$$Lambda$getNameString, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ImageReader$Node, inst$)->getNameString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ImageReader$$Lambda$getNameString>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ImageReader$$Lambda$getNameString::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageReader$$Lambda$getNameString::*)()>(&ImageReader$$Lambda$getNameString::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ImageReader$$Lambda$getNameString::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jimage.ImageReader$$Lambda$getNameString",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ImageReader$$Lambda$getNameString::load$($String* name, bool initialize) {
	$loadClass(ImageReader$$Lambda$getNameString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ImageReader$$Lambda$getNameString::class$ = nullptr;

class ImageReader$$Lambda$lambda$getModuleNames$0$1 : public $Function {
	$class(ImageReader$$Lambda$lambda$getModuleNames$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$(int32_t off) {
		this->off = off;
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(ImageReader::lambda$getModuleNames$0(off, $cast($String, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ImageReader$$Lambda$lambda$getModuleNames$0$1>());
	}
	int32_t off = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ImageReader$$Lambda$lambda$getModuleNames$0$1::fieldInfos[2] = {
	{"off", "I", nullptr, $PUBLIC, $field(ImageReader$$Lambda$lambda$getModuleNames$0$1, off)},
	{}
};
$MethodInfo ImageReader$$Lambda$lambda$getModuleNames$0$1::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ImageReader$$Lambda$lambda$getModuleNames$0$1::*)(int32_t)>(&ImageReader$$Lambda$lambda$getModuleNames$0$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ImageReader$$Lambda$lambda$getModuleNames$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jimage.ImageReader$$Lambda$lambda$getModuleNames$0$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ImageReader$$Lambda$lambda$getModuleNames$0$1::load$($String* name, bool initialize) {
	$loadClass(ImageReader$$Lambda$lambda$getModuleNames$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ImageReader$$Lambda$lambda$getModuleNames$0$1::class$ = nullptr;

class ImageReader$$Lambda$lambda$getModuleNames$1$2 : public $IntFunction {
	$class(ImageReader$$Lambda$lambda$getModuleNames$1$2, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(ImageReader::lambda$getModuleNames$1(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ImageReader$$Lambda$lambda$getModuleNames$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ImageReader$$Lambda$lambda$getModuleNames$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageReader$$Lambda$lambda$getModuleNames$1$2::*)()>(&ImageReader$$Lambda$lambda$getModuleNames$1$2::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ImageReader$$Lambda$lambda$getModuleNames$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.jimage.ImageReader$$Lambda$lambda$getModuleNames$1$2",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* ImageReader$$Lambda$lambda$getModuleNames$1$2::load$($String* name, bool initialize) {
	$loadClass(ImageReader$$Lambda$lambda$getModuleNames$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ImageReader$$Lambda$lambda$getModuleNames$1$2::class$ = nullptr;

$FieldInfo _ImageReader_FieldInfo_[] = {
	{"reader", "Ljdk/internal/jimage/ImageReader$SharedImageReader;", nullptr, $PRIVATE | $FINAL, $field(ImageReader, reader)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ImageReader, closed)},
	{}
};

$MethodInfo _ImageReader_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jimage/ImageReader$SharedImageReader;)V", nullptr, $PRIVATE, $method(static_cast<void(ImageReader::*)($ImageReader$SharedImageReader*)>(&ImageReader::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageReader::*)()>(&ImageReader::ensureOpen)), "java.io.IOException"},
	{"findLocation", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/jimage/ImageLocation;", nullptr, $PUBLIC, $method(static_cast<$ImageLocation*(ImageReader::*)($String*,$String*)>(&ImageReader::findLocation))},
	{"findLocation", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageLocation;", nullptr, $PUBLIC, $method(static_cast<$ImageLocation*(ImageReader::*)($String*)>(&ImageReader::findLocation))},
	{"findNode", "(Ljava/lang/String;)Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PUBLIC, $method(static_cast<$ImageReader$Node*(ImageReader::*)($String*)>(&ImageReader::findNode)), "java.io.IOException"},
	{"getAttributes", "(I)[J", nullptr, $PUBLIC, $method(static_cast<$longs*(ImageReader::*)(int32_t)>(&ImageReader::getAttributes))},
	{"getByteOrder", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $method(static_cast<$ByteOrder*(ImageReader::*)()>(&ImageReader::getByteOrder))},
	{"getEntryNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$StringArray*(ImageReader::*)()>(&ImageReader::getEntryNames))},
	{"getHeader", "()Ljdk/internal/jimage/ImageHeader;", nullptr, $PUBLIC, $method(static_cast<$ImageHeader*(ImageReader::*)()>(&ImageReader::getHeader))},
	{"getImagePath", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $method(static_cast<$Path*(ImageReader::*)()>(&ImageReader::getImagePath))},
	{"getModuleNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$StringArray*(ImageReader::*)()>(&ImageReader::getModuleNames))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ImageReader::*)()>(&ImageReader::getName))},
	{"getResource", "(Ljdk/internal/jimage/ImageReader$Node;)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(ImageReader::*)($ImageReader$Node*)>(&ImageReader::getResource)), "java.io.IOException"},
	{"getResource", "(Ljdk/internal/jimage/ImageReader$Resource;)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(ImageReader::*)($ImageReader$Resource*)>(&ImageReader::getResource)), "java.io.IOException"},
	{"getResource", "(Ljava/lang/String;)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(ImageReader::*)($String*)>(&ImageReader::getResource))},
	{"getResource", "(Ljdk/internal/jimage/ImageLocation;)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(ImageReader::*)($ImageLocation*)>(&ImageReader::getResource))},
	{"getResourceBuffer", "(Ljdk/internal/jimage/ImageLocation;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $method(static_cast<$ByteBuffer*(ImageReader::*)($ImageLocation*)>(&ImageReader::getResourceBuffer))},
	{"getResourceStream", "(Ljdk/internal/jimage/ImageLocation;)Ljava/io/InputStream;", nullptr, $PUBLIC, $method(static_cast<$InputStream*(ImageReader::*)($ImageLocation*)>(&ImageReader::getResourceStream))},
	{"getRootDirectory", "()Ljdk/internal/jimage/ImageReader$Directory;", nullptr, $PUBLIC, $method(static_cast<$ImageReader$Directory*(ImageReader::*)()>(&ImageReader::getRootDirectory)), "java.io.IOException"},
	{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ImageReader::*)(int32_t)>(&ImageReader::getString))},
	{"getStrings", "()Ljdk/internal/jimage/ImageStringsReader;", nullptr, $PUBLIC, $method(static_cast<$ImageStringsReader*(ImageReader::*)()>(&ImageReader::getStrings))},
	{"lambda$getModuleNames$0", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)(int32_t,$String*)>(&ImageReader::lambda$getModuleNames$0))},
	{"lambda$getModuleNames$1", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StringArray*(*)(int32_t)>(&ImageReader::lambda$getModuleNames$1))},
	{"open", "(Ljava/nio/file/Path;Ljava/nio/ByteOrder;)Ljdk/internal/jimage/ImageReader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageReader*(*)($Path*,$ByteOrder*)>(&ImageReader::open)), "java.io.IOException"},
	{"open", "(Ljava/nio/file/Path;)Ljdk/internal/jimage/ImageReader;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ImageReader*(*)($Path*)>(&ImageReader::open)), "java.io.IOException"},
	{"releaseByteBuffer", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*)>(&ImageReader::releaseByteBuffer))},
	{"requireOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(ImageReader::*)()>(&ImageReader::requireOpen))},
	{"verifyLocation", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(static_cast<bool(ImageReader::*)($String*,$String*)>(&ImageReader::verifyLocation))},
	{}
};

$InnerClassInfo _ImageReader_InnerClassesInfo_[] = {
	{"jdk.internal.jimage.ImageReader$LinkNode", "jdk.internal.jimage.ImageReader", "LinkNode", $STATIC},
	{"jdk.internal.jimage.ImageReader$Resource", "jdk.internal.jimage.ImageReader", "Resource", $STATIC},
	{"jdk.internal.jimage.ImageReader$Directory", "jdk.internal.jimage.ImageReader", "Directory", $STATIC | $FINAL},
	{"jdk.internal.jimage.ImageReader$Node", "jdk.internal.jimage.ImageReader", "Node", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.jimage.ImageReader$SharedImageReader", "jdk.internal.jimage.ImageReader", "SharedImageReader", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ImageReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.jimage.ImageReader",
	"java.lang.Object",
	"java.lang.AutoCloseable",
	_ImageReader_FieldInfo_,
	_ImageReader_MethodInfo_,
	nullptr,
	nullptr,
	_ImageReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.jimage.ImageReader$LinkNode,jdk.internal.jimage.ImageReader$Resource,jdk.internal.jimage.ImageReader$Directory,jdk.internal.jimage.ImageReader$Node,jdk.internal.jimage.ImageReader$SharedImageReader,jdk.internal.jimage.ImageReader$SharedImageReader$LocationVisitor"
};

$Object* allocate$ImageReader($Class* clazz) {
	return $of($alloc(ImageReader));
}

void ImageReader::init$($ImageReader$SharedImageReader* reader) {
	$set(this, reader, reader);
}

ImageReader* ImageReader::open($Path* imagePath, $ByteOrder* byteOrder) {
	$init(ImageReader);
	$Objects::requireNonNull(imagePath);
	$Objects::requireNonNull(byteOrder);
	return $ImageReader$SharedImageReader::open(imagePath, byteOrder);
}

ImageReader* ImageReader::open($Path* imagePath) {
	$init(ImageReader);
	return open(imagePath, $($ByteOrder::nativeOrder()));
}

void ImageReader::close() {
	if (this->closed) {
		$throwNew($IOException, "image file already closed"_s);
	}
	$nc(this->reader)->close(this);
	this->closed = true;
}

void ImageReader::ensureOpen() {
	if (this->closed) {
		$throwNew($IOException, "image file closed"_s);
	}
}

void ImageReader::requireOpen() {
	if (this->closed) {
		$throwNew($IllegalStateException, "image file closed"_s);
	}
}

$ImageReader$Directory* ImageReader::getRootDirectory() {
	ensureOpen();
	return $nc(this->reader)->getRootDirectory();
}

$ImageReader$Node* ImageReader::findNode($String* name) {
	ensureOpen();
	return $nc(this->reader)->findNode(name);
}

$bytes* ImageReader::getResource($ImageReader$Node* node) {
	ensureOpen();
	return $nc(this->reader)->getResource(node);
}

$bytes* ImageReader::getResource($ImageReader$Resource* rs) {
	ensureOpen();
	return $nc(this->reader)->getResource(rs);
}

$ImageHeader* ImageReader::getHeader() {
	requireOpen();
	return $nc(this->reader)->getHeader();
}

void ImageReader::releaseByteBuffer($ByteBuffer* buffer) {
	$init(ImageReader);
	$BasicImageReader::releaseByteBuffer(buffer);
}

$String* ImageReader::getName() {
	requireOpen();
	return $nc(this->reader)->getName();
}

$ByteOrder* ImageReader::getByteOrder() {
	requireOpen();
	return $nc(this->reader)->getByteOrder();
}

$Path* ImageReader::getImagePath() {
	requireOpen();
	return $nc(this->reader)->getImagePath();
}

$ImageStringsReader* ImageReader::getStrings() {
	requireOpen();
	return $nc(this->reader)->getStrings();
}

$ImageLocation* ImageReader::findLocation($String* mn, $String* rn) {
	requireOpen();
	return $nc(this->reader)->findLocation(mn, rn);
}

bool ImageReader::verifyLocation($String* mn, $String* rn) {
	requireOpen();
	return $nc(this->reader)->verifyLocation(mn, rn);
}

$ImageLocation* ImageReader::findLocation($String* name) {
	requireOpen();
	return $nc(this->reader)->findLocation(name);
}

$StringArray* ImageReader::getEntryNames() {
	requireOpen();
	return $nc(this->reader)->getEntryNames();
}

$StringArray* ImageReader::getModuleNames() {
	$useLocalCurrentObjectStackCache();
	requireOpen();
	int32_t off = "/modules/"_s->length();
	return $fcast($StringArray, $nc($($nc($($nc($($nc($($nc($($nc(this->reader)->findNode("/modules"_s)))->getChildren()))->stream()))->map(static_cast<$Function*>($$new(ImageReader$$Lambda$getNameString)))))->map(static_cast<$Function*>($$new(ImageReader$$Lambda$lambda$getModuleNames$0$1, off)))))->toArray(static_cast<$IntFunction*>($$new(ImageReader$$Lambda$lambda$getModuleNames$1$2))));
}

$longs* ImageReader::getAttributes(int32_t offset) {
	requireOpen();
	return $nc(this->reader)->getAttributes(offset);
}

$String* ImageReader::getString(int32_t offset) {
	requireOpen();
	return $nc(this->reader)->getString(offset);
}

$bytes* ImageReader::getResource($String* name) {
	requireOpen();
	return $nc(this->reader)->getResource(name);
}

$bytes* ImageReader::getResource($ImageLocation* loc) {
	requireOpen();
	return $nc(this->reader)->getResource(loc);
}

$ByteBuffer* ImageReader::getResourceBuffer($ImageLocation* loc) {
	requireOpen();
	return $nc(this->reader)->getResourceBuffer(loc);
}

$InputStream* ImageReader::getResourceStream($ImageLocation* loc) {
	requireOpen();
	return $nc(this->reader)->getResourceStream(loc);
}

$StringArray* ImageReader::lambda$getModuleNames$1(int32_t x$0) {
	$init(ImageReader);
	return $new($StringArray, x$0);
}

$String* ImageReader::lambda$getModuleNames$0(int32_t off, $String* s) {
	$init(ImageReader);
	return $nc(s)->substring(off, s->length());
}

ImageReader::ImageReader() {
}

$Class* ImageReader::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ImageReader$$Lambda$getNameString::classInfo$.name)) {
			return ImageReader$$Lambda$getNameString::load$(name, initialize);
		}
		if (name->equals(ImageReader$$Lambda$lambda$getModuleNames$0$1::classInfo$.name)) {
			return ImageReader$$Lambda$lambda$getModuleNames$0$1::load$(name, initialize);
		}
		if (name->equals(ImageReader$$Lambda$lambda$getModuleNames$1$2::classInfo$.name)) {
			return ImageReader$$Lambda$lambda$getModuleNames$1$2::load$(name, initialize);
		}
	}
	$loadClass(ImageReader, name, initialize, &_ImageReader_ClassInfo_, allocate$ImageReader);
	return class$;
}

$Class* ImageReader::class$ = nullptr;

		} // jimage
	} // internal
} // jdk