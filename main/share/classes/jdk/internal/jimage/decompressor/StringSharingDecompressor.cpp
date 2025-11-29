#include <jdk/internal/jimage/decompressor/StringSharingDecompressor.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <jdk/internal/jimage/decompressor/CompressIndexes.h>
#include <jdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider.h>
#include <jdk/internal/jimage/decompressor/StringSharingDecompressorFactory.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef EXTERNALIZED_STRING
#undef EXTERNALIZED_STRING_DESCRIPTOR
#undef NAME
#undef SIZES

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $CompressIndexes = ::jdk::internal::jimage::decompressor::CompressIndexes;
using $ResourceDecompressor$StringsProvider = ::jdk::internal::jimage::decompressor::ResourceDecompressor$StringsProvider;
using $StringSharingDecompressorFactory = ::jdk::internal::jimage::decompressor::StringSharingDecompressorFactory;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

$FieldInfo _StringSharingDecompressor_FieldInfo_[] = {
	{"EXTERNALIZED_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StringSharingDecompressor, EXTERNALIZED_STRING)},
	{"EXTERNALIZED_STRING_DESCRIPTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StringSharingDecompressor, EXTERNALIZED_STRING_DESCRIPTOR)},
	{"CONSTANT_Utf8", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Utf8)},
	{"CONSTANT_Integer", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Integer)},
	{"CONSTANT_Float", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Float)},
	{"CONSTANT_Long", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Long)},
	{"CONSTANT_Double", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Double)},
	{"CONSTANT_Class", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Class)},
	{"CONSTANT_String", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_String)},
	{"CONSTANT_Fieldref", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Fieldref)},
	{"CONSTANT_Methodref", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Methodref)},
	{"CONSTANT_InterfaceMethodref", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_InterfaceMethodref)},
	{"CONSTANT_NameAndType", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_NameAndType)},
	{"CONSTANT_MethodHandle", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_MethodHandle)},
	{"CONSTANT_MethodType", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_MethodType)},
	{"CONSTANT_InvokeDynamic", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_InvokeDynamic)},
	{"CONSTANT_Module", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Module)},
	{"CONSTANT_Package", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringSharingDecompressor, CONSTANT_Package)},
	{"SIZES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringSharingDecompressor, SIZES)},
	{}
};

$MethodInfo _StringSharingDecompressor_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $method(static_cast<void(StringSharingDecompressor::*)($Properties*)>(&StringSharingDecompressor::init$))},
	{"decompress", "(Ljdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider;[BIJ)[B", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"getEncoded", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($String*)>(&StringSharingDecompressor::getEncoded)), "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSizes", "()[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)()>(&StringSharingDecompressor::getSizes))},
	{"normalize", "(Ljdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider;[BI)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ResourceDecompressor$StringsProvider*,$bytes*,int32_t)>(&StringSharingDecompressor::normalize)), "java.io.IOException"},
	{"reconstruct", "(Ljdk/internal/jimage/decompressor/ResourceDecompressor$StringsProvider;Ljava/io/DataInputStream;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($ResourceDecompressor$StringsProvider*,$DataInputStream*)>(&StringSharingDecompressor::reconstruct)), "java.io.IOException"},
	{"safeAdd", "(Ljava/nio/ByteBuffer;B)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ByteBuffer*(*)($ByteBuffer*,int8_t)>(&StringSharingDecompressor::safeAdd))},
	{"safeAdd", "(Ljava/nio/ByteBuffer;[B)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ByteBuffer*(*)($ByteBuffer*,$bytes*)>(&StringSharingDecompressor::safeAdd))},
	{}
};

$ClassInfo _StringSharingDecompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.jimage.decompressor.StringSharingDecompressor",
	"java.lang.Object",
	"jdk.internal.jimage.decompressor.ResourceDecompressor",
	_StringSharingDecompressor_FieldInfo_,
	_StringSharingDecompressor_MethodInfo_
};

$Object* allocate$StringSharingDecompressor($Class* clazz) {
	return $of($alloc(StringSharingDecompressor));
}

$ints* StringSharingDecompressor::SIZES = nullptr;

$ints* StringSharingDecompressor::getSizes() {
	$init(StringSharingDecompressor);
	return $cast($ints, $nc(StringSharingDecompressor::SIZES)->clone());
}

$bytes* StringSharingDecompressor::normalize($ResourceDecompressor$StringsProvider* provider, $bytes* transformed, int32_t offset) {
	$init(StringSharingDecompressor);
	$useLocalCurrentObjectStackCache();
	$var($DataInputStream, stream, $new($DataInputStream, $$new($ByteArrayInputStream, transformed, offset, $nc(transformed)->length - offset)));
	$var($ByteArrayOutputStream, outStream, $new($ByteArrayOutputStream, $nc(transformed)->length));
	$var($DataOutputStream, out, $new($DataOutputStream, outStream));
	$var($bytes, header, $new($bytes, 8));
	stream->readFully(header);
	out->write(header);
	int32_t count = stream->readUnsignedShort();
	out->writeShort(count);
	for (int32_t i = 1; i < count; ++i) {
		int32_t tag = stream->readUnsignedByte();
		$var($bytes, arr, nullptr);
		switch (tag) {
		case StringSharingDecompressor::CONSTANT_Utf8:
			{
				{
					out->write(tag);
					$var($String, utf, stream->readUTF());
					out->writeUTF(utf);
					break;
				}
			}
		case StringSharingDecompressor::EXTERNALIZED_STRING:
			{
				{
					int32_t index = $CompressIndexes::readInt(stream);
					$var($String, orig, $nc(provider)->getString(index));
					out->write(StringSharingDecompressor::CONSTANT_Utf8);
					out->writeUTF(orig);
					break;
				}
			}
		case StringSharingDecompressor::EXTERNALIZED_STRING_DESCRIPTOR:
			{
				{
					$var($String, orig, reconstruct(provider, stream));
					out->write(StringSharingDecompressor::CONSTANT_Utf8);
					out->writeUTF(orig);
					break;
				}
			}
		case StringSharingDecompressor::CONSTANT_Long:
			{}
		case StringSharingDecompressor::CONSTANT_Double:
			{
				{
					++i;
				}
			}
		default:
			{
				{
					out->write(tag);
					int32_t size = $nc(StringSharingDecompressor::SIZES)->get(tag);
					$assign(arr, $new($bytes, size));
					stream->readFully(arr);
					out->write(arr);
				}
			}
		}
	}
	$var($bytes, var$0, transformed);
	int32_t var$1 = $nc(transformed)->length - stream->available();
	out->write(var$0, var$1, stream->available());
	out->flush();
	return outStream->toByteArray();
}

$String* StringSharingDecompressor::reconstruct($ResourceDecompressor$StringsProvider* reader, $DataInputStream* cr) {
	$init(StringSharingDecompressor);
	$useLocalCurrentObjectStackCache();
	int32_t descIndex = $CompressIndexes::readInt(cr);
	$var($String, desc, $nc(reader)->getString(descIndex));
	$var($bytes, encodedDesc, getEncoded(desc));
	int32_t indexes_length = $CompressIndexes::readInt(cr);
	$var($bytes, bytes, $new($bytes, indexes_length));
	$nc(cr)->readFully(bytes);
	$var($List, indices, $CompressIndexes::decompressFlow(bytes));
	$var($ByteBuffer, buffer, $ByteBuffer::allocate($nc(encodedDesc)->length * 2));
	$init($ByteOrder);
	$nc(buffer)->order($ByteOrder::BIG_ENDIAN);
	int32_t argIndex = 0;
	{
		$var($bytes, arr$, encodedDesc);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t c = arr$->get(i$);
			{
				if (c == u'L') {
					$assign(buffer, safeAdd(buffer, c));
					int32_t index = $nc(($cast($Integer, $($nc(indices)->get(argIndex)))))->intValue();
					argIndex += 1;
					$var($String, pkg, reader->getString(index));
					if (!$nc(pkg)->isEmpty()) {
						$assign(pkg, $str({pkg, "/"_s}));
						$var($bytes, encoded, getEncoded(pkg));
						$assign(buffer, safeAdd(buffer, encoded));
					}
					int32_t classIndex = $nc(($cast($Integer, $(indices->get(argIndex)))))->intValue();
					argIndex += 1;
					$var($String, clazz, reader->getString(classIndex));
					$var($bytes, encoded, getEncoded(clazz));
					$assign(buffer, safeAdd(buffer, encoded));
				} else {
					$assign(buffer, safeAdd(buffer, c));
				}
			}
		}
	}
	$var($bytes, encoded, $cast($bytes, buffer->array()));
	$var($ByteBuffer, result, $ByteBuffer::allocate($nc(encoded)->length + 2));
	$nc(result)->order($ByteOrder::BIG_ENDIAN);
	result->putShort((int16_t)buffer->position());
	result->put(encoded, 0, buffer->position());
	$var($ByteArrayInputStream, stream, $new($ByteArrayInputStream, $($cast($bytes, result->array()))));
	$var($DataInputStream, inStream, $new($DataInputStream, stream));
	$var($String, str, inStream->readUTF());
	return str;
}

$bytes* StringSharingDecompressor::getEncoded($String* pre) {
	$init(StringSharingDecompressor);
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, resultStream, $new($ByteArrayOutputStream));
	$var($DataOutputStream, resultOut, $new($DataOutputStream, resultStream));
	resultOut->writeUTF(pre);
	$var($bytes, content, resultStream->toByteArray());
	if ($nc(content)->length <= 2) {
		return $new($bytes, 0);
	}
	return $Arrays::copyOfRange(content, 2, $nc(content)->length);
}

$ByteBuffer* StringSharingDecompressor::safeAdd($ByteBuffer* current, int8_t b) {
	$init(StringSharingDecompressor);
	$var($bytes, bytes, $new($bytes, {b}));
	return safeAdd(current, bytes);
}

$ByteBuffer* StringSharingDecompressor::safeAdd($ByteBuffer* current$renamed, $bytes* bytes) {
	$init(StringSharingDecompressor);
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, current, current$renamed);
	if ($nc(current)->remaining() < $nc(bytes)->length) {
		$var($ByteBuffer, newBuffer, $ByteBuffer::allocate((current->capacity() + bytes->length) * 2));
		$init($ByteOrder);
		$nc(newBuffer)->order($ByteOrder::BIG_ENDIAN);
		$var($bytes, var$0, $cast($bytes, current->array()));
		newBuffer->put(var$0, 0, current->position());
		$assign(current, newBuffer);
	}
	$nc(current)->put(bytes);
	return current;
}

$String* StringSharingDecompressor::getName() {
	$init($StringSharingDecompressorFactory);
	return $StringSharingDecompressorFactory::NAME;
}

void StringSharingDecompressor::init$($Properties* properties) {
}

$bytes* StringSharingDecompressor::decompress($ResourceDecompressor$StringsProvider* reader, $bytes* content, int32_t offset, int64_t originalSize) {
	return normalize(reader, content, offset);
}

void clinit$StringSharingDecompressor($Class* class$) {
	$assignStatic(StringSharingDecompressor::SIZES, $new($ints, 21));
	{
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_Integer, 4);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_Float, 4);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_Long, 8);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_Double, 8);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_Class, 2);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_String, 2);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_Fieldref, 4);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_Methodref, 4);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_InterfaceMethodref, 4);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_NameAndType, 4);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_MethodHandle, 3);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_MethodType, 2);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_InvokeDynamic, 4);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_Module, 2);
		$nc(StringSharingDecompressor::SIZES)->set(StringSharingDecompressor::CONSTANT_Package, 2);
	}
}

StringSharingDecompressor::StringSharingDecompressor() {
}

$Class* StringSharingDecompressor::load$($String* name, bool initialize) {
	$loadClass(StringSharingDecompressor, name, initialize, &_StringSharingDecompressor_ClassInfo_, clinit$StringSharingDecompressor, allocate$StringSharingDecompressor);
	return class$;
}

$Class* StringSharingDecompressor::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk