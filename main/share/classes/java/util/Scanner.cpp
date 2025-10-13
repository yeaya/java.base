#include <java/util/Scanner.h>

#include <java/io/Closeable.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/io/StringReader.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Readable.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/IllegalCharsetNameException.h>
#include <java/nio/charset/UnsupportedCharsetException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/text/DecimalFormat.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/NumberFormat.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/InputMismatchException.h>
#include <java/util/Iterator.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/Scanner$FindSpliterator.h>
#include <java/util/Scanner$PatternLRUCache.h>
#include <java/util/Scanner$TokenSpliterator.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractSpliterator.h>
#include <java/util/regex/MatchResult.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <jcpp.h>

#undef BOOLEAN_PATTERN
#undef BUFFER_SIZE
#undef CASE_INSENSITIVE
#undef FIND_ANY_PATTERN
#undef FORMAT
#undef LINE_PATTERN
#undef LINE_SEPARATOR_PATTERN
#undef MAX_RADIX
#undef MIN_RADIX
#undef NON_ASCII_DIGIT
#undef SIMPLE_GROUP_INDEX
#undef WHITESPACE_PATTERN

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $Closeable = ::java::io::Closeable;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $StringReader = ::java::io::StringReader;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Readable = ::java::lang::Readable;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Buffer = ::java::nio::Buffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $Channels = ::java::nio::channels::Channels;
using $FileChannel = ::java::nio::channels::FileChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $IllegalCharsetNameException = ::java::nio::charset::IllegalCharsetNameException;
using $UnsupportedCharsetException = ::java::nio::charset::UnsupportedCharsetException;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $DecimalFormat = ::java::text::DecimalFormat;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $NumberFormat = ::java::text::NumberFormat;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $InputMismatchException = ::java::util::InputMismatchException;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Scanner$FindSpliterator = ::java::util::Scanner$FindSpliterator;
using $Scanner$PatternLRUCache = ::java::util::Scanner$PatternLRUCache;
using $Scanner$TokenSpliterator = ::java::util::Scanner$TokenSpliterator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators$AbstractSpliterator = ::java::util::Spliterators$AbstractSpliterator;
using $MatchResult = ::java::util::regex::MatchResult;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;
using $ResourceBundleBasedAdapter = ::sun::util::locale::provider::ResourceBundleBasedAdapter;

namespace java {
	namespace util {

class Scanner$$Lambda$close : public $Runnable {
	$class(Scanner$$Lambda$close, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Scanner* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->close();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Scanner$$Lambda$close>());
	}
	Scanner* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Scanner$$Lambda$close::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Scanner$$Lambda$close, inst$)},
	{}
};
$MethodInfo Scanner$$Lambda$close::methodInfos[3] = {
	{"<init>", "(Ljava/util/Scanner;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner$$Lambda$close::*)(Scanner*)>(&Scanner$$Lambda$close::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Scanner$$Lambda$close::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Scanner$$Lambda$close",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Scanner$$Lambda$close::load$($String* name, bool initialize) {
	$loadClass(Scanner$$Lambda$close, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Scanner$$Lambda$close::class$ = nullptr;

$FieldInfo _Scanner_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Scanner, $assertionsDisabled)},
	{"buf", "Ljava/nio/CharBuffer;", nullptr, $PRIVATE, $field(Scanner, buf)},
	{"BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Scanner, BUFFER_SIZE)},
	{"position", "I", nullptr, $PRIVATE, $field(Scanner, position)},
	{"matcher", "Ljava/util/regex/Matcher;", nullptr, $PRIVATE, $field(Scanner, matcher)},
	{"delimPattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $field(Scanner, delimPattern)},
	{"hasNextPattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $field(Scanner, hasNextPattern)},
	{"hasNextPosition", "I", nullptr, $PRIVATE, $field(Scanner, hasNextPosition)},
	{"hasNextResult", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, hasNextResult)},
	{"source", "Ljava/lang/Readable;", nullptr, $PRIVATE, $field(Scanner, source)},
	{"sourceClosed", "Z", nullptr, $PRIVATE, $field(Scanner, sourceClosed)},
	{"needInput", "Z", nullptr, $PRIVATE, $field(Scanner, needInput)},
	{"skipped", "Z", nullptr, $PRIVATE, $field(Scanner, skipped)},
	{"savedScannerPosition", "I", nullptr, $PRIVATE, $field(Scanner, savedScannerPosition)},
	{"typeCache", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Scanner, typeCache)},
	{"matchValid", "Z", nullptr, $PRIVATE, $field(Scanner, matchValid)},
	{"closed", "Z", nullptr, $PRIVATE, $field(Scanner, closed)},
	{"radix", "I", nullptr, $PRIVATE, $field(Scanner, radix$)},
	{"defaultRadix", "I", nullptr, $PRIVATE, $field(Scanner, defaultRadix)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(Scanner, locale$)},
	{"patternCache", "Ljava/util/Scanner$PatternLRUCache;", nullptr, $PRIVATE, $field(Scanner, patternCache)},
	{"lastException", "Ljava/io/IOException;", nullptr, $PRIVATE, $field(Scanner, lastException)},
	{"modCount", "I", nullptr, 0, $field(Scanner, modCount)},
	{"WHITESPACE_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $staticField(Scanner, WHITESPACE_PATTERN)},
	{"FIND_ANY_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $staticField(Scanner, FIND_ANY_PATTERN)},
	{"NON_ASCII_DIGIT", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $staticField(Scanner, NON_ASCII_DIGIT)},
	{"groupSeparator", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, groupSeparator)},
	{"decimalSeparator", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, decimalSeparator)},
	{"nanString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, nanString)},
	{"infinityString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, infinityString)},
	{"positivePrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, positivePrefix)},
	{"negativePrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, negativePrefix)},
	{"positiveSuffix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, positiveSuffix)},
	{"negativeSuffix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, negativeSuffix)},
	{"boolPattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Scanner, boolPattern$)},
	{"BOOLEAN_PATTERN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Scanner, BOOLEAN_PATTERN)},
	{"integerPattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $field(Scanner, integerPattern$)},
	{"digits", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, digits)},
	{"non0Digit", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Scanner, non0Digit)},
	{"SIMPLE_GROUP_INDEX", "I", nullptr, $PRIVATE, $field(Scanner, SIMPLE_GROUP_INDEX)},
	{"separatorPattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Scanner, separatorPattern$)},
	{"linePattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Scanner, linePattern$)},
	{"LINE_SEPARATOR_PATTERN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Scanner, LINE_SEPARATOR_PATTERN)},
	{"LINE_PATTERN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Scanner, LINE_PATTERN)},
	{"floatPattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $field(Scanner, floatPattern$)},
	{"decimalPattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $field(Scanner, decimalPattern$)},
	{}
};

$MethodInfo _Scanner_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Readable;Ljava/util/regex/Pattern;)V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)($Readable*,$Pattern*)>(&Scanner::init$))},
	{"<init>", "(Ljava/lang/Readable;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($Readable*)>(&Scanner::init$))},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($InputStream*)>(&Scanner::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($InputStream*,$String*)>(&Scanner::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($InputStream*,$Charset*)>(&Scanner::init$))},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($File*)>(&Scanner::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/io/File;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($File*,$String*)>(&Scanner::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/io/File;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($File*,$Charset*)>(&Scanner::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;Ljava/nio/charset/CharsetDecoder;)V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)($File*,$CharsetDecoder*)>(&Scanner::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($Path*)>(&Scanner::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/nio/file/Path;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($Path*,$String*)>(&Scanner::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($Path*,$Charset*)>(&Scanner::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($String*)>(&Scanner::init$))},
	{"<init>", "(Ljava/nio/channels/ReadableByteChannel;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($ReadableByteChannel*)>(&Scanner::init$))},
	{"<init>", "(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($ReadableByteChannel*,$String*)>(&Scanner::init$))},
	{"<init>", "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(Scanner::*)($ReadableByteChannel*,$Charset*)>(&Scanner::init$))},
	{"boolPattern", "()Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern*(*)()>(&Scanner::boolPattern))},
	{"buildFloatAndDecimalPattern", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)()>(&Scanner::buildFloatAndDecimalPattern))},
	{"buildIntegerPatternString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Scanner::*)()>(&Scanner::buildIntegerPatternString))},
	{"cacheResult", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)()>(&Scanner::cacheResult))},
	{"cacheResult", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)($String*)>(&Scanner::cacheResult))},
	{"clearCaches", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)()>(&Scanner::clearCaches))},
	{"close", "()V", nullptr, $PUBLIC},
	{"decimalPattern", "()Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $method(static_cast<$Pattern*(Scanner::*)()>(&Scanner::decimalPattern))},
	{"delimiter", "()Ljava/util/regex/Pattern;", nullptr, $PUBLIC, $method(static_cast<$Pattern*(Scanner::*)()>(&Scanner::delimiter))},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)()>(&Scanner::ensureOpen))},
	{"findAll", "(Ljava/util/regex/Pattern;)Ljava/util/stream/Stream;", "(Ljava/util/regex/Pattern;)Ljava/util/stream/Stream<Ljava/util/regex/MatchResult;>;", $PUBLIC, $method(static_cast<$Stream*(Scanner::*)($Pattern*)>(&Scanner::findAll))},
	{"findAll", "(Ljava/lang/String;)Ljava/util/stream/Stream;", "(Ljava/lang/String;)Ljava/util/stream/Stream<Ljava/util/regex/MatchResult;>;", $PUBLIC, $method(static_cast<$Stream*(Scanner::*)($String*)>(&Scanner::findAll))},
	{"findInLine", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Scanner::*)($String*)>(&Scanner::findInLine))},
	{"findInLine", "(Ljava/util/regex/Pattern;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Scanner::*)($Pattern*)>(&Scanner::findInLine))},
	{"findPatternInBuffer", "(Ljava/util/regex/Pattern;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(Scanner::*)($Pattern*,int32_t)>(&Scanner::findPatternInBuffer))},
	{"findWithinHorizon", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Scanner::*)($String*,int32_t)>(&Scanner::findWithinHorizon))},
	{"findWithinHorizon", "(Ljava/util/regex/Pattern;I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Scanner::*)($Pattern*,int32_t)>(&Scanner::findWithinHorizon))},
	{"floatPattern", "()Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $method(static_cast<$Pattern*(Scanner::*)()>(&Scanner::floatPattern))},
	{"getCachedResult", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Scanner::*)()>(&Scanner::getCachedResult))},
	{"getCompleteTokenInBuffer", "(Ljava/util/regex/Pattern;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Scanner::*)($Pattern*)>(&Scanner::getCompleteTokenInBuffer))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"hasNext", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)($String*)>(&Scanner::hasNext))},
	{"hasNext", "(Ljava/util/regex/Pattern;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)($Pattern*)>(&Scanner::hasNext))},
	{"hasNextBigDecimal", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextBigDecimal))},
	{"hasNextBigInteger", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextBigInteger))},
	{"hasNextBigInteger", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)(int32_t)>(&Scanner::hasNextBigInteger))},
	{"hasNextBoolean", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextBoolean))},
	{"hasNextByte", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextByte))},
	{"hasNextByte", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)(int32_t)>(&Scanner::hasNextByte))},
	{"hasNextDouble", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextDouble))},
	{"hasNextFloat", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextFloat))},
	{"hasNextInt", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextInt))},
	{"hasNextInt", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)(int32_t)>(&Scanner::hasNextInt))},
	{"hasNextLine", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextLine))},
	{"hasNextLong", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextLong))},
	{"hasNextLong", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)(int32_t)>(&Scanner::hasNextLong))},
	{"hasNextShort", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasNextShort))},
	{"hasNextShort", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)(int32_t)>(&Scanner::hasNextShort))},
	{"hasTokenInBuffer", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Scanner::*)()>(&Scanner::hasTokenInBuffer))},
	{"integerPattern", "()Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $method(static_cast<$Pattern*(Scanner::*)()>(&Scanner::integerPattern))},
	{"ioException", "()Ljava/io/IOException;", nullptr, $PUBLIC, $method(static_cast<$IOException*(Scanner::*)()>(&Scanner::ioException))},
	{"linePattern", "()Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern*(*)()>(&Scanner::linePattern))},
	{"locale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $method(static_cast<$Locale*(Scanner::*)()>(&Scanner::locale))},
	{"makeReadable", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/lang/Readable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Readable*(*)($Path*,$Charset*)>(&Scanner::makeReadable)), "java.io.IOException"},
	{"makeReadable", "(Ljava/io/InputStream;Ljava/nio/charset/Charset;)Ljava/lang/Readable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Readable*(*)($InputStream*,$Charset*)>(&Scanner::makeReadable))},
	{"makeReadable", "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/CharsetDecoder;)Ljava/lang/Readable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Readable*(*)($ReadableByteChannel*,$CharsetDecoder*)>(&Scanner::makeReadable))},
	{"makeReadable", "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)Ljava/lang/Readable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Readable*(*)($ReadableByteChannel*,$Charset*)>(&Scanner::makeReadable))},
	{"makeReadable", "(Ljava/nio/channels/ReadableByteChannel;)Ljava/lang/Readable;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Readable*(*)($ReadableByteChannel*)>(&Scanner::makeReadable))},
	{"makeSpace", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Scanner::*)()>(&Scanner::makeSpace))},
	{"match", "()Ljava/util/regex/MatchResult;", nullptr, $PUBLIC, $method(static_cast<$MatchResult*(Scanner::*)()>(&Scanner::match))},
	{"matchPatternInBuffer", "(Ljava/util/regex/Pattern;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Scanner::*)($Pattern*)>(&Scanner::matchPatternInBuffer))},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"next", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Scanner::*)($String*)>(&Scanner::next))},
	{"next", "(Ljava/util/regex/Pattern;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Scanner::*)($Pattern*)>(&Scanner::next))},
	{"nextBigDecimal", "()Ljava/math/BigDecimal;", nullptr, $PUBLIC, $method(static_cast<$BigDecimal*(Scanner::*)()>(&Scanner::nextBigDecimal))},
	{"nextBigInteger", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $method(static_cast<$BigInteger*(Scanner::*)()>(&Scanner::nextBigInteger))},
	{"nextBigInteger", "(I)Ljava/math/BigInteger;", nullptr, $PUBLIC, $method(static_cast<$BigInteger*(Scanner::*)(int32_t)>(&Scanner::nextBigInteger))},
	{"nextBoolean", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Scanner::*)()>(&Scanner::nextBoolean))},
	{"nextByte", "()B", nullptr, $PUBLIC, $method(static_cast<int8_t(Scanner::*)()>(&Scanner::nextByte))},
	{"nextByte", "(I)B", nullptr, $PUBLIC, $method(static_cast<int8_t(Scanner::*)(int32_t)>(&Scanner::nextByte))},
	{"nextDouble", "()D", nullptr, $PUBLIC, $method(static_cast<double(Scanner::*)()>(&Scanner::nextDouble))},
	{"nextFloat", "()F", nullptr, $PUBLIC, $method(static_cast<float(Scanner::*)()>(&Scanner::nextFloat))},
	{"nextInt", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Scanner::*)()>(&Scanner::nextInt))},
	{"nextInt", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Scanner::*)(int32_t)>(&Scanner::nextInt))},
	{"nextLine", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Scanner::*)()>(&Scanner::nextLine))},
	{"nextLong", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(Scanner::*)()>(&Scanner::nextLong))},
	{"nextLong", "(I)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Scanner::*)(int32_t)>(&Scanner::nextLong))},
	{"nextShort", "()S", nullptr, $PUBLIC, $method(static_cast<int16_t(Scanner::*)()>(&Scanner::nextShort))},
	{"nextShort", "(I)S", nullptr, $PUBLIC, $method(static_cast<int16_t(Scanner::*)(int32_t)>(&Scanner::nextShort))},
	{"processFloatToken", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Scanner::*)($String*)>(&Scanner::processFloatToken))},
	{"processIntegerToken", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Scanner::*)($String*)>(&Scanner::processIntegerToken))},
	{"radix", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Scanner::*)()>(&Scanner::radix))},
	{"readInput", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)()>(&Scanner::readInput))},
	{"remove", "()V", nullptr, $PUBLIC},
	{"reset", "()Ljava/util/Scanner;", nullptr, $PUBLIC, $method(static_cast<Scanner*(Scanner::*)()>(&Scanner::reset))},
	{"revertState", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)()>(&Scanner::revertState))},
	{"revertState", "(Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(Scanner::*)(bool)>(&Scanner::revertState))},
	{"saveState", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)()>(&Scanner::saveState))},
	{"separatorPattern", "()Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern*(*)()>(&Scanner::separatorPattern))},
	{"setRadix", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)(int32_t)>(&Scanner::setRadix))},
	{"skip", "(Ljava/util/regex/Pattern;)Ljava/util/Scanner;", nullptr, $PUBLIC, $method(static_cast<Scanner*(Scanner::*)($Pattern*)>(&Scanner::skip))},
	{"skip", "(Ljava/lang/String;)Ljava/util/Scanner;", nullptr, $PUBLIC, $method(static_cast<Scanner*(Scanner::*)($String*)>(&Scanner::skip))},
	{"throwFor", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)()>(&Scanner::throwFor))},
	{"toCharset", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Charset*(*)($String*)>(&Scanner::toCharset))},
	{"toDecoder", "(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CharsetDecoder*(*)($String*)>(&Scanner::toDecoder))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tokens", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$Stream*(Scanner::*)()>(&Scanner::tokens))},
	{"translateSavedIndexes", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)(int32_t)>(&Scanner::translateSavedIndexes))},
	{"useDelimiter", "(Ljava/util/regex/Pattern;)Ljava/util/Scanner;", nullptr, $PUBLIC, $method(static_cast<Scanner*(Scanner::*)($Pattern*)>(&Scanner::useDelimiter))},
	{"useDelimiter", "(Ljava/lang/String;)Ljava/util/Scanner;", nullptr, $PUBLIC, $method(static_cast<Scanner*(Scanner::*)($String*)>(&Scanner::useDelimiter))},
	{"useLocale", "(Ljava/util/Locale;)Ljava/util/Scanner;", nullptr, $PUBLIC, $method(static_cast<Scanner*(Scanner::*)($Locale*)>(&Scanner::useLocale))},
	{"useRadix", "(I)Ljava/util/Scanner;", nullptr, $PUBLIC, $method(static_cast<Scanner*(Scanner::*)(int32_t)>(&Scanner::useRadix))},
	{"useTypeCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(Scanner::*)()>(&Scanner::useTypeCache))},
	{}
};

$InnerClassInfo _Scanner_InnerClassesInfo_[] = {
	{"java.util.Scanner$PatternLRUCache", "java.util.Scanner", "PatternLRUCache", $PRIVATE | $STATIC},
	{"java.util.Scanner$FindSpliterator", "java.util.Scanner", "FindSpliterator", 0},
	{"java.util.Scanner$TokenSpliterator", "java.util.Scanner", "TokenSpliterator", 0},
	{}
};

$ClassInfo _Scanner_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.Scanner",
	"java.lang.Object",
	"java.util.Iterator,java.io.Closeable",
	_Scanner_FieldInfo_,
	_Scanner_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;Ljava/io/Closeable;",
	nullptr,
	_Scanner_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.Scanner$PatternLRUCache,java.util.Scanner$FindSpliterator,java.util.Scanner$TokenSpliterator"
};

$Object* allocate$Scanner($Class* clazz) {
	return $of($alloc(Scanner));
}

int32_t Scanner::hashCode() {
	 return this->$Iterator::hashCode();
}

bool Scanner::equals(Object$* obj) {
	 return this->$Iterator::equals(obj);
}

$Object* Scanner::clone() {
	 return this->$Iterator::clone();
}

void Scanner::finalize() {
	this->$Iterator::finalize();
}

bool Scanner::$assertionsDisabled = false;
$Pattern* Scanner::WHITESPACE_PATTERN = nullptr;
$Pattern* Scanner::FIND_ANY_PATTERN = nullptr;
$Pattern* Scanner::NON_ASCII_DIGIT = nullptr;

$volatile($Pattern*) Scanner::boolPattern$ = nullptr;
$String* Scanner::BOOLEAN_PATTERN = nullptr;

$volatile($Pattern*) Scanner::separatorPattern$ = nullptr;
$volatile($Pattern*) Scanner::linePattern$ = nullptr;
$String* Scanner::LINE_SEPARATOR_PATTERN = nullptr;
$String* Scanner::LINE_PATTERN = nullptr;

$Pattern* Scanner::boolPattern() {
	$init(Scanner);
	$var($Pattern, bp, Scanner::boolPattern$);
	if (bp == nullptr) {
		$assignStatic(Scanner::boolPattern$, ($assign(bp, $Pattern::compile(Scanner::BOOLEAN_PATTERN, $Pattern::CASE_INSENSITIVE))));
	}
	return bp;
}

$String* Scanner::buildIntegerPatternString() {
	$var($String, radixDigits, $nc(this->digits)->substring(0, this->radix$));
	$var($String, digit, $str({"((?i)["_s, radixDigits, "\\p{javaDigit}])"_s}));
	$var($String, groupedNumeral, $str({"("_s, this->non0Digit, digit, "?"_s, digit, "?("_s, this->groupSeparator, digit, digit, digit, ")+)"_s}));
	$var($String, numeral, $str({"(("_s, digit, "++)|"_s, groupedNumeral, ")"_s}));
	$var($String, javaStyleInteger, $str({"([-+]?("_s, numeral, "))"_s}));
	$var($String, negativeInteger, $str({this->negativePrefix, numeral, this->negativeSuffix}));
	$var($String, positiveInteger, $str({this->positivePrefix, numeral, this->positiveSuffix}));
	return $str({"("_s, javaStyleInteger, ")|("_s, positiveInteger, ")|("_s, negativeInteger, ")"_s});
}

$Pattern* Scanner::integerPattern() {
	if (this->integerPattern$ == nullptr) {
		$set(this, integerPattern$, $nc(this->patternCache)->forName($(buildIntegerPatternString())));
	}
	return this->integerPattern$;
}

$Pattern* Scanner::separatorPattern() {
	$init(Scanner);
	$var($Pattern, sp, Scanner::separatorPattern$);
	if (sp == nullptr) {
		$assignStatic(Scanner::separatorPattern$, ($assign(sp, $Pattern::compile(Scanner::LINE_SEPARATOR_PATTERN))));
	}
	return sp;
}

$Pattern* Scanner::linePattern() {
	$init(Scanner);
	$var($Pattern, lp, Scanner::linePattern$);
	if (lp == nullptr) {
		$assignStatic(Scanner::linePattern$, ($assign(lp, $Pattern::compile(Scanner::LINE_PATTERN))));
	}
	return lp;
}

void Scanner::buildFloatAndDecimalPattern() {
	$var($String, digit, "(([0-9\\p{javaDigit}]))"_s);
	$var($String, exponent, $str({"([eE][+-]?"_s, digit, "+)?"_s}));
	$var($String, groupedNumeral, $str({"("_s, this->non0Digit, digit, "?"_s, digit, "?("_s, this->groupSeparator, digit, digit, digit, ")+)"_s}));
	$var($String, numeral, $str({"(("_s, digit, "++)|"_s, groupedNumeral, ")"_s}));
	$var($String, decimalNumeral, $str({"("_s, numeral, "|"_s, numeral, this->decimalSeparator, digit, "*+|"_s, this->decimalSeparator, digit, "++)"_s}));
	$var($String, nonNumber, $str({"(NaN|"_s, this->nanString, "|Infinity|"_s, this->infinityString, ")"_s}));
	$var($String, positiveFloat, $str({"("_s, this->positivePrefix, decimalNumeral, this->positiveSuffix, exponent, ")"_s}));
	$var($String, negativeFloat, $str({"("_s, this->negativePrefix, decimalNumeral, this->negativeSuffix, exponent, ")"_s}));
	$var($String, decimal, $str({"(([-+]?"_s, decimalNumeral, exponent, ")|"_s, positiveFloat, "|"_s, negativeFloat, ")"_s}));
	$var($String, hexFloat, "[-+]?0[xX][0-9a-fA-F]*\\.[0-9a-fA-F]+([pP][-+]?[0-9]+)?"_s);
	$var($String, positiveNonNumber, $str({"("_s, this->positivePrefix, nonNumber, this->positiveSuffix, ")"_s}));
	$var($String, negativeNonNumber, $str({"("_s, this->negativePrefix, nonNumber, this->negativeSuffix, ")"_s}));
	$var($String, signedNonNumber, $str({"(([-+]?"_s, nonNumber, ")|"_s, positiveNonNumber, "|"_s, negativeNonNumber, ")"_s}));
	$set(this, floatPattern$, $Pattern::compile($$str({decimal, "|"_s, hexFloat, "|"_s, signedNonNumber})));
	$set(this, decimalPattern$, $Pattern::compile(decimal));
}

$Pattern* Scanner::floatPattern() {
	if (this->floatPattern$ == nullptr) {
		buildFloatAndDecimalPattern();
	}
	return this->floatPattern$;
}

$Pattern* Scanner::decimalPattern() {
	if (this->decimalPattern$ == nullptr) {
		buildFloatAndDecimalPattern();
	}
	return this->decimalPattern$;
}

void Scanner::init$($Readable* source, $Pattern* pattern) {
	this->sourceClosed = false;
	this->needInput = false;
	this->skipped = false;
	this->savedScannerPosition = -1;
	$set(this, typeCache, nullptr);
	this->matchValid = false;
	this->closed = false;
	this->radix$ = 10;
	this->defaultRadix = 10;
	$set(this, locale$, nullptr);
	$set(this, patternCache, $new($Scanner$PatternLRUCache, 7));
	$set(this, groupSeparator, "\\,"_s);
	$set(this, decimalSeparator, "\\."_s);
	$set(this, nanString, "NaN"_s);
	$set(this, infinityString, "Infinity"_s);
	$set(this, positivePrefix, ""_s);
	$set(this, negativePrefix, "\\-"_s);
	$set(this, positiveSuffix, ""_s);
	$set(this, negativeSuffix, ""_s);
	$set(this, digits, "0123456789abcdefghijklmnopqrstuvwxyz"_s);
	$set(this, non0Digit, "[\\p{javaDigit}&&[^0]]"_s);
	this->SIMPLE_GROUP_INDEX = 5;
	if (!Scanner::$assertionsDisabled && !(source != nullptr)) {
		$throwNew($AssertionError, $of("source should not be null"_s));
	}
	if (!Scanner::$assertionsDisabled && !(pattern != nullptr)) {
		$throwNew($AssertionError, $of("pattern should not be null"_s));
	}
	$set(this, source, source);
	$set(this, delimPattern, pattern);
	$set(this, buf, $CharBuffer::allocate(Scanner::BUFFER_SIZE));
	$nc(this->buf)->limit(0);
	$set(this, matcher, $nc(this->delimPattern)->matcher(this->buf));
	$nc(this->matcher)->useTransparentBounds(true);
	$nc(this->matcher)->useAnchoringBounds(false);
	$init($Locale$Category);
	useLocale($($Locale::getDefault($Locale$Category::FORMAT)));
}

void Scanner::init$($Readable* source) {
	Scanner::init$($cast($Readable, $Objects::requireNonNull($of(source), "source"_s)), Scanner::WHITESPACE_PATTERN);
}

void Scanner::init$($InputStream* source) {
	Scanner::init$(static_cast<$Readable*>($$new($InputStreamReader, source)), Scanner::WHITESPACE_PATTERN);
}

void Scanner::init$($InputStream* source, $String* charsetName) {
	Scanner::init$(source, $(toCharset(charsetName)));
}

void Scanner::init$($InputStream* source, $Charset* charset) {
	Scanner::init$($(makeReadable($cast($InputStream, $Objects::requireNonNull($of(source), "source"_s)), charset)), Scanner::WHITESPACE_PATTERN);
}

$Charset* Scanner::toCharset($String* csn) {
	$init(Scanner);
	$Objects::requireNonNull($of(csn), "charsetName"_s);
	try {
		return $Charset::forName(csn);
	} catch ($IllegalCharsetNameException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedCharsetException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$Readable* Scanner::makeReadable($Path* source, $Charset* charset) {
	$init(Scanner);
	$Objects::requireNonNull($of(charset), "charset"_s);
	return makeReadable($($Files::newInputStream(source, $$new($OpenOptionArray, 0))), charset);
}

$Readable* Scanner::makeReadable($InputStream* source, $Charset* charset) {
	$init(Scanner);
	$Objects::requireNonNull($of(charset), "charset"_s);
	return $new($InputStreamReader, source, charset);
}

void Scanner::init$($File* source) {
	Scanner::init$(static_cast<$ReadableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(($($$new($FileInputStream, source)->getChannel()))))));
}

void Scanner::init$($File* source, $String* charsetName) {
	$var($File, var$0, $cast($File, $Objects::requireNonNull(source)));
	Scanner::init$(var$0, $(toDecoder(charsetName)));
}

void Scanner::init$($File* source, $Charset* charset) {
	$var($File, var$0, $cast($File, $Objects::requireNonNull(source)));
	Scanner::init$(var$0, $($nc(charset)->newDecoder()));
}

void Scanner::init$($File* source, $CharsetDecoder* dec) {
	Scanner::init$($(makeReadable(static_cast<$ReadableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(($($$new($FileInputStream, source)->getChannel()))))), dec)));
}

$CharsetDecoder* Scanner::toDecoder($String* charsetName) {
	$init(Scanner);
	$Objects::requireNonNull($of(charsetName), "charsetName"_s);
	try {
		return $nc($($Charset::forName(charsetName)))->newDecoder();
	} catch ($IllegalCharsetNameException&) {
		$var($IllegalArgumentException, unused, $catch());
		$throwNew($IllegalArgumentException, charsetName);
	} catch ($UnsupportedCharsetException&) {
		$var($IllegalArgumentException, unused, $catch());
		$throwNew($IllegalArgumentException, charsetName);
	}
	$shouldNotReachHere();
}

$Readable* Scanner::makeReadable($ReadableByteChannel* source, $CharsetDecoder* dec) {
	$init(Scanner);
	return $Channels::newReader(source, dec, -1);
}

$Readable* Scanner::makeReadable($ReadableByteChannel* source, $Charset* charset) {
	$init(Scanner);
	$Objects::requireNonNull($of(charset), "charset"_s);
	return $Channels::newReader(source, charset);
}

void Scanner::init$($Path* source) {
	Scanner::init$($($Files::newInputStream(source, $$new($OpenOptionArray, 0))));
}

void Scanner::init$($Path* source, $String* charsetName) {
	$var($Path, var$0, $cast($Path, $Objects::requireNonNull(source)));
	Scanner::init$(var$0, $(toCharset(charsetName)));
}

void Scanner::init$($Path* source, $Charset* charset) {
	Scanner::init$($(makeReadable(source, charset)));
}

void Scanner::init$($String* source) {
	Scanner::init$(static_cast<$Readable*>($$new($StringReader, source)), Scanner::WHITESPACE_PATTERN);
}

void Scanner::init$($ReadableByteChannel* source) {
	Scanner::init$($(makeReadable($cast($ReadableByteChannel, $Objects::requireNonNull($of(source), "source"_s)))), Scanner::WHITESPACE_PATTERN);
}

$Readable* Scanner::makeReadable($ReadableByteChannel* source) {
	$init(Scanner);
	return makeReadable(source, $($nc($($Charset::defaultCharset()))->newDecoder()));
}

void Scanner::init$($ReadableByteChannel* source, $String* charsetName) {
	$var($ReadableByteChannel, var$0, $cast($ReadableByteChannel, $Objects::requireNonNull($of(source), "source"_s)));
	Scanner::init$($(makeReadable(var$0, $(toDecoder(charsetName)))), Scanner::WHITESPACE_PATTERN);
}

void Scanner::init$($ReadableByteChannel* source, $Charset* charset) {
	Scanner::init$($(makeReadable($cast($ReadableByteChannel, $Objects::requireNonNull($of(source), "source"_s)), charset)), Scanner::WHITESPACE_PATTERN);
}

void Scanner::saveState() {
	this->savedScannerPosition = this->position;
}

void Scanner::revertState() {
	this->position = this->savedScannerPosition;
	this->savedScannerPosition = -1;
	this->skipped = false;
}

bool Scanner::revertState(bool b) {
	this->position = this->savedScannerPosition;
	this->savedScannerPosition = -1;
	this->skipped = false;
	return b;
}

void Scanner::cacheResult() {
	$set(this, hasNextResult, $nc(this->matcher)->group());
	this->hasNextPosition = $nc(this->matcher)->end();
	$set(this, hasNextPattern, $nc(this->matcher)->pattern());
}

void Scanner::cacheResult($String* result) {
	$set(this, hasNextResult, result);
	this->hasNextPosition = $nc(this->matcher)->end();
	$set(this, hasNextPattern, $nc(this->matcher)->pattern());
}

void Scanner::clearCaches() {
	$set(this, hasNextPattern, nullptr);
	$set(this, typeCache, nullptr);
}

$String* Scanner::getCachedResult() {
	this->position = this->hasNextPosition;
	$set(this, hasNextPattern, nullptr);
	$set(this, typeCache, nullptr);
	return this->hasNextResult;
}

void Scanner::useTypeCache() {
	if (this->closed) {
		$throwNew($IllegalStateException, "Scanner closed"_s);
	}
	this->position = this->hasNextPosition;
	$set(this, hasNextPattern, nullptr);
	$set(this, typeCache, nullptr);
}

void Scanner::readInput() {
	int32_t var$0 = $nc(this->buf)->limit();
	if (var$0 == $nc(this->buf)->capacity()) {
		makeSpace();
	}
	int32_t p = $nc(this->buf)->position();
	$nc(this->buf)->position($nc(this->buf)->limit());
	$nc(this->buf)->limit($nc(this->buf)->capacity());
	int32_t n = 0;
	try {
		n = $nc(this->source)->read(this->buf);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$set(this, lastException, ioe);
		n = -1;
	}
	if (n == -1) {
		this->sourceClosed = true;
		this->needInput = false;
	}
	if (n > 0) {
		this->needInput = false;
	}
	$nc(this->buf)->limit($nc(this->buf)->position());
	$nc(this->buf)->position(p);
}

bool Scanner::makeSpace() {
	clearCaches();
	int32_t offset = this->savedScannerPosition == -1 ? this->position : this->savedScannerPosition;
	$nc(this->buf)->position(offset);
	if (offset > 0) {
		$nc(this->buf)->compact();
		translateSavedIndexes(offset);
		this->position -= offset;
		$nc(this->buf)->flip();
		return true;
	}
	int32_t newSize = $nc(this->buf)->capacity() * 2;
	$var($CharBuffer, newBuf, $CharBuffer::allocate(newSize));
	$nc(newBuf)->put(this->buf);
	newBuf->flip();
	translateSavedIndexes(offset);
	this->position -= offset;
	$set(this, buf, newBuf);
	$nc(this->matcher)->reset(this->buf);
	return true;
}

void Scanner::translateSavedIndexes(int32_t offset) {
	if (this->savedScannerPosition != -1) {
		this->savedScannerPosition -= offset;
	}
}

void Scanner::throwFor() {
	this->skipped = false;
	if ((this->sourceClosed) && (this->position == $nc(this->buf)->limit())) {
		$throwNew($NoSuchElementException);
	} else {
		$throwNew($InputMismatchException);
	}
}

bool Scanner::hasTokenInBuffer() {
	this->matchValid = false;
	$nc(this->matcher)->usePattern(this->delimPattern);
	$nc(this->matcher)->region(this->position, $nc(this->buf)->limit());
	if ($nc(this->matcher)->lookingAt()) {
		if ($nc(this->matcher)->hitEnd() && !this->sourceClosed) {
			this->needInput = true;
			return false;
		}
		this->position = $nc(this->matcher)->end();
	}
	if (this->position == $nc(this->buf)->limit()) {
		return false;
	}
	return true;
}

$String* Scanner::getCompleteTokenInBuffer($Pattern* pattern$renamed) {
	$var($Pattern, pattern, pattern$renamed);
	this->matchValid = false;
	$nc(this->matcher)->usePattern(this->delimPattern);
	if (!this->skipped) {
		$nc(this->matcher)->region(this->position, $nc(this->buf)->limit());
		if ($nc(this->matcher)->lookingAt()) {
			if ($nc(this->matcher)->hitEnd() && !this->sourceClosed) {
				this->needInput = true;
				return nullptr;
			}
			this->skipped = true;
			this->position = $nc(this->matcher)->end();
		}
	}
	if (this->position == $nc(this->buf)->limit()) {
		if (this->sourceClosed) {
			return nullptr;
		}
		this->needInput = true;
		return nullptr;
	}
	$nc(this->matcher)->region(this->position, $nc(this->buf)->limit());
	bool foundNextDelim = $nc(this->matcher)->find();
	if (foundNextDelim && ($nc(this->matcher)->end() == this->position)) {
		foundNextDelim = $nc(this->matcher)->find();
	}
	if (foundNextDelim) {
		if ($nc(this->matcher)->requireEnd() && !this->sourceClosed) {
			this->needInput = true;
			return nullptr;
		}
		int32_t tokenEnd = $nc(this->matcher)->start();
		if (pattern == nullptr) {
			$assign(pattern, Scanner::FIND_ANY_PATTERN);
		}
		$nc(this->matcher)->usePattern(pattern);
		$nc(this->matcher)->region(this->position, tokenEnd);
		if ($nc(this->matcher)->matches()) {
			$var($String, s, $nc(this->matcher)->group());
			this->position = $nc(this->matcher)->end();
			return s;
		} else {
			return nullptr;
		}
	}
	if (this->sourceClosed) {
		if (pattern == nullptr) {
			$assign(pattern, Scanner::FIND_ANY_PATTERN);
		}
		$nc(this->matcher)->usePattern(pattern);
		$nc(this->matcher)->region(this->position, $nc(this->buf)->limit());
		if ($nc(this->matcher)->matches()) {
			$var($String, s, $nc(this->matcher)->group());
			this->position = $nc(this->matcher)->end();
			return s;
		}
		return nullptr;
	}
	this->needInput = true;
	return nullptr;
}

bool Scanner::findPatternInBuffer($Pattern* pattern, int32_t horizon) {
	this->matchValid = false;
	$nc(this->matcher)->usePattern(pattern);
	int32_t bufferLimit = $nc(this->buf)->limit();
	int32_t horizonLimit = -1;
	int32_t searchLimit = bufferLimit;
	if (horizon > 0) {
		horizonLimit = this->position + horizon;
		if (horizonLimit < bufferLimit) {
			searchLimit = horizonLimit;
		}
	}
	$nc(this->matcher)->region(this->position, searchLimit);
	if ($nc(this->matcher)->find()) {
		if ($nc(this->matcher)->hitEnd() && (!this->sourceClosed)) {
			if (searchLimit != horizonLimit) {
				this->needInput = true;
				return false;
			}
			if ((searchLimit == horizonLimit) && $nc(this->matcher)->requireEnd()) {
				this->needInput = true;
				return false;
			}
		}
		this->position = $nc(this->matcher)->end();
		return true;
	}
	if (this->sourceClosed) {
		return false;
	}
	if ((horizon == 0) || (searchLimit != horizonLimit)) {
		this->needInput = true;
	}
	return false;
}

bool Scanner::matchPatternInBuffer($Pattern* pattern) {
	this->matchValid = false;
	$nc(this->matcher)->usePattern(pattern);
	$nc(this->matcher)->region(this->position, $nc(this->buf)->limit());
	if ($nc(this->matcher)->lookingAt()) {
		if ($nc(this->matcher)->hitEnd() && (!this->sourceClosed)) {
			this->needInput = true;
			return false;
		}
		this->position = $nc(this->matcher)->end();
		return true;
	}
	if (this->sourceClosed) {
		return false;
	}
	this->needInput = true;
	return false;
}

void Scanner::ensureOpen() {
	if (this->closed) {
		$throwNew($IllegalStateException, "Scanner closed"_s);
	}
}

void Scanner::close() {
	if (this->closed) {
		return;
	}
	if ($instanceOf($Closeable, this->source)) {
		try {
			$nc(($cast($Closeable, this->source)))->close();
		} catch ($IOException&) {
			$var($IOException, ioe, $catch());
			$set(this, lastException, ioe);
		}
	}
	this->sourceClosed = true;
	$set(this, source, nullptr);
	this->closed = true;
}

$IOException* Scanner::ioException() {
	return this->lastException;
}

$Pattern* Scanner::delimiter() {
	return this->delimPattern;
}

Scanner* Scanner::useDelimiter($Pattern* pattern) {
	++this->modCount;
	$set(this, delimPattern, pattern);
	return this;
}

Scanner* Scanner::useDelimiter($String* pattern) {
	++this->modCount;
	$set(this, delimPattern, $nc(this->patternCache)->forName(pattern));
	return this;
}

$Locale* Scanner::locale() {
	return this->locale$;
}

Scanner* Scanner::useLocale($Locale* locale) {
	if ($nc(locale)->equals(this->locale$)) {
		return this;
	}
	++this->modCount;
	$set(this, locale$, locale);
	$var($DecimalFormat, df, nullptr);
	$var($NumberFormat, nf, $NumberFormat::getNumberInstance(locale));
	$var($DecimalFormatSymbols, dfs, $DecimalFormatSymbols::getInstance(locale));
	if ($instanceOf($DecimalFormat, nf)) {
		$assign(df, $cast($DecimalFormat, nf));
	} else {
		$load($NumberFormatProvider);
		$var($LocaleProviderAdapter, adapter, $LocaleProviderAdapter::getAdapter($NumberFormatProvider::class$, locale));
		if (!($instanceOf($ResourceBundleBasedAdapter, adapter))) {
			$assign(adapter, $LocaleProviderAdapter::getResourceBundleBased());
		}
		$var($StringArray, all, $nc($($nc(adapter)->getLocaleResources(locale)))->getNumberPatterns());
		$assign(df, $new($DecimalFormat, $nc(all)->get(0), dfs));
	}
	$set(this, groupSeparator, $str({"\\x{"_s, $($Integer::toHexString($nc(dfs)->getGroupingSeparator())), "}"_s}));
	$set(this, decimalSeparator, $str({"\\x{"_s, $($Integer::toHexString($nc(dfs)->getDecimalSeparator())), "}"_s}));
	$set(this, nanString, $Pattern::quote($($nc(dfs)->getNaN())));
	$set(this, infinityString, $Pattern::quote($($nc(dfs)->getInfinity())));
	$set(this, positivePrefix, $nc(df)->getPositivePrefix());
	if (!$nc(this->positivePrefix)->isEmpty()) {
		$set(this, positivePrefix, $Pattern::quote(this->positivePrefix));
	}
	$set(this, negativePrefix, df->getNegativePrefix());
	if (!$nc(this->negativePrefix)->isEmpty()) {
		$set(this, negativePrefix, $Pattern::quote(this->negativePrefix));
	}
	$set(this, positiveSuffix, df->getPositiveSuffix());
	if (!$nc(this->positiveSuffix)->isEmpty()) {
		$set(this, positiveSuffix, $Pattern::quote(this->positiveSuffix));
	}
	$set(this, negativeSuffix, df->getNegativeSuffix());
	if (!$nc(this->negativeSuffix)->isEmpty()) {
		$set(this, negativeSuffix, $Pattern::quote(this->negativeSuffix));
	}
	$set(this, integerPattern$, nullptr);
	$set(this, floatPattern$, nullptr);
	return this;
}

int32_t Scanner::radix() {
	return this->defaultRadix;
}

Scanner* Scanner::useRadix(int32_t radix) {
	if ((radix < $Character::MIN_RADIX) || (radix > $Character::MAX_RADIX)) {
		$throwNew($IllegalArgumentException, $$str({"radix:"_s, $$str(radix)}));
	}
	if (this->defaultRadix == radix) {
		return this;
	}
	++this->modCount;
	this->defaultRadix = radix;
	$set(this, integerPattern$, nullptr);
	return this;
}

void Scanner::setRadix(int32_t radix) {
	if ((radix < $Character::MIN_RADIX) || (radix > $Character::MAX_RADIX)) {
		$throwNew($IllegalArgumentException, $$str({"radix:"_s, $$str(radix)}));
	}
	if (this->radix$ != radix) {
		$set(this, integerPattern$, nullptr);
		this->radix$ = radix;
	}
}

$MatchResult* Scanner::match() {
	if (!this->matchValid) {
		$throwNew($IllegalStateException, "No match result available"_s);
	}
	return $nc(this->matcher)->toMatchResult();
}

$String* Scanner::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("java.util.Scanner"_s);
	sb->append($$str({"[delimiters="_s, this->delimPattern, "]"_s}));
	sb->append($$str({"[position="_s, $$str(this->position), "]"_s}));
	sb->append($$str({"[match valid="_s, $$str(this->matchValid), "]"_s}));
	sb->append($$str({"[need input="_s, $$str(this->needInput), "]"_s}));
	sb->append($$str({"[source closed="_s, $$str(this->sourceClosed), "]"_s}));
	sb->append($$str({"[skipped="_s, $$str(this->skipped), "]"_s}));
	sb->append($$str({"[group separator="_s, this->groupSeparator, "]"_s}));
	sb->append($$str({"[decimal separator="_s, this->decimalSeparator, "]"_s}));
	sb->append($$str({"[positive prefix="_s, this->positivePrefix, "]"_s}));
	sb->append($$str({"[negative prefix="_s, this->negativePrefix, "]"_s}));
	sb->append($$str({"[positive suffix="_s, this->positiveSuffix, "]"_s}));
	sb->append($$str({"[negative suffix="_s, this->negativeSuffix, "]"_s}));
	sb->append($$str({"[NaN string="_s, this->nanString, "]"_s}));
	sb->append($$str({"[infinity string="_s, this->infinityString, "]"_s}));
	return sb->toString();
}

bool Scanner::hasNext() {
	ensureOpen();
	saveState();
	++this->modCount;
	while (!this->sourceClosed) {
		if (hasTokenInBuffer()) {
			return revertState(true);
		}
		readInput();
	}
	bool result = hasTokenInBuffer();
	return revertState(result);
}

$Object* Scanner::next() {
	ensureOpen();
	clearCaches();
	++this->modCount;
	while (true) {
		$var($String, token, getCompleteTokenInBuffer(nullptr));
		if (token != nullptr) {
			this->matchValid = true;
			this->skipped = false;
			return $of(token);
		}
		if (this->needInput) {
			readInput();
		} else {
			throwFor();
		}
	}
}

void Scanner::remove() {
	$throwNew($UnsupportedOperationException);
}

bool Scanner::hasNext($String* pattern) {
	return hasNext($($nc(this->patternCache)->forName(pattern)));
}

$String* Scanner::next($String* pattern) {
	return next($($nc(this->patternCache)->forName(pattern)));
}

bool Scanner::hasNext($Pattern* pattern) {
	ensureOpen();
	if (pattern == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, hasNextPattern, nullptr);
	saveState();
	++this->modCount;
	while (true) {
		if (getCompleteTokenInBuffer(pattern) != nullptr) {
			this->matchValid = true;
			cacheResult();
			return revertState(true);
		}
		if (this->needInput) {
			readInput();
		} else {
			return revertState(false);
		}
	}
}

$String* Scanner::next($Pattern* pattern) {
	ensureOpen();
	if (pattern == nullptr) {
		$throwNew($NullPointerException);
	}
	++this->modCount;
	if (this->hasNextPattern == pattern) {
		return getCachedResult();
	}
	clearCaches();
	while (true) {
		$var($String, token, getCompleteTokenInBuffer(pattern));
		if (token != nullptr) {
			this->matchValid = true;
			this->skipped = false;
			return token;
		}
		if (this->needInput) {
			readInput();
		} else {
			throwFor();
		}
	}
}

bool Scanner::hasNextLine() {
	saveState();
	++this->modCount;
	$var($String, result, findWithinHorizon($(linePattern()), 0));
	if (result != nullptr) {
		$var($MatchResult, mr, this->match());
		$var($String, lineSep, $nc(mr)->group(1));
		if (lineSep != nullptr) {
			int32_t var$0 = result->length();
			$assign(result, result->substring(0, var$0 - lineSep->length()));
			cacheResult(result);
		} else {
			cacheResult();
		}
	}
	revertState();
	return (result != nullptr);
}

$String* Scanner::nextLine() {
	++this->modCount;
	if (this->hasNextPattern == linePattern()) {
		return getCachedResult();
	}
	clearCaches();
	$var($String, result, findWithinHorizon(Scanner::linePattern$, 0));
	if (result == nullptr) {
		$throwNew($NoSuchElementException, "No line found"_s);
	}
	$var($MatchResult, mr, this->match());
	$var($String, lineSep, $nc(mr)->group(1));
	if (lineSep != nullptr) {
		int32_t var$0 = result->length();
		$assign(result, $nc(result)->substring(0, var$0 - lineSep->length()));
	}
	if (result == nullptr) {
		$throwNew($NoSuchElementException);
	} else {
		return result;
	}
}

$String* Scanner::findInLine($String* pattern) {
	return findInLine($($nc(this->patternCache)->forName(pattern)));
}

$String* Scanner::findInLine($Pattern* pattern) {
	ensureOpen();
	if (pattern == nullptr) {
		$throwNew($NullPointerException);
	}
	clearCaches();
	++this->modCount;
	int32_t endPosition = 0;
	saveState();
	while (true) {
		if (findPatternInBuffer($(separatorPattern()), 0)) {
			endPosition = $nc(this->matcher)->start();
			break;
		}
		if (this->needInput) {
			readInput();
		} else {
			endPosition = $nc(this->buf)->limit();
			break;
		}
	}
	revertState();
	int32_t horizonForLine = endPosition - this->position;
	if (horizonForLine == 0) {
		return nullptr;
	}
	return findWithinHorizon(pattern, horizonForLine);
}

$String* Scanner::findWithinHorizon($String* pattern, int32_t horizon) {
	return findWithinHorizon($($nc(this->patternCache)->forName(pattern)), horizon);
}

$String* Scanner::findWithinHorizon($Pattern* pattern, int32_t horizon) {
	ensureOpen();
	if (pattern == nullptr) {
		$throwNew($NullPointerException);
	}
	if (horizon < 0) {
		$throwNew($IllegalArgumentException, "horizon < 0"_s);
	}
	clearCaches();
	++this->modCount;
	while (true) {
		if (findPatternInBuffer(pattern, horizon)) {
			this->matchValid = true;
			return $nc(this->matcher)->group();
		}
		if (this->needInput) {
			readInput();
		} else {
			break;
		}
	}
	return nullptr;
}

Scanner* Scanner::skip($Pattern* pattern) {
	ensureOpen();
	if (pattern == nullptr) {
		$throwNew($NullPointerException);
	}
	clearCaches();
	++this->modCount;
	while (true) {
		if (matchPatternInBuffer(pattern)) {
			this->matchValid = true;
			this->position = $nc(this->matcher)->end();
			return this;
		}
		if (this->needInput) {
			readInput();
		} else {
			$throwNew($NoSuchElementException);
		}
	}
}

Scanner* Scanner::skip($String* pattern) {
	return skip($($nc(this->patternCache)->forName(pattern)));
}

bool Scanner::hasNextBoolean() {
	return hasNext($(boolPattern()));
}

bool Scanner::nextBoolean() {
	clearCaches();
	return $Boolean::parseBoolean($(next($(boolPattern()))));
}

bool Scanner::hasNextByte() {
	return hasNextByte(this->defaultRadix);
}

bool Scanner::hasNextByte(int32_t radix) {
	setRadix(radix);
	bool result = hasNext($(integerPattern()));
	if (result) {
		try {
			$var($String, s, ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) ? processIntegerToken(this->hasNextResult) : this->hasNextResult);
			$set(this, typeCache, $Byte::valueOf($Byte::parseByte(s, radix)));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			result = false;
		}
	}
	return result;
}

int8_t Scanner::nextByte() {
	return nextByte(this->defaultRadix);
}

int8_t Scanner::nextByte(int32_t radix) {
	if ((this->typeCache != nullptr) && ($instanceOf($Byte, this->typeCache)) && this->radix$ == radix) {
		int8_t val = $nc(($cast($Byte, this->typeCache)))->byteValue();
		useTypeCache();
		return val;
	}
	setRadix(radix);
	clearCaches();
	try {
		$var($String, s, next($(integerPattern())));
		if ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) {
			$assign(s, processIntegerToken(s));
		}
		return $Byte::parseByte(s, radix);
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		this->position = $nc(this->matcher)->start();
		$throwNew($InputMismatchException, $(nfe->getMessage()));
	}
	$shouldNotReachHere();
}

bool Scanner::hasNextShort() {
	return hasNextShort(this->defaultRadix);
}

bool Scanner::hasNextShort(int32_t radix) {
	setRadix(radix);
	bool result = hasNext($(integerPattern()));
	if (result) {
		try {
			$var($String, s, ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) ? processIntegerToken(this->hasNextResult) : this->hasNextResult);
			$set(this, typeCache, $Short::valueOf($Short::parseShort(s, radix)));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			result = false;
		}
	}
	return result;
}

int16_t Scanner::nextShort() {
	return nextShort(this->defaultRadix);
}

int16_t Scanner::nextShort(int32_t radix) {
	if ((this->typeCache != nullptr) && ($instanceOf($Short, this->typeCache)) && this->radix$ == radix) {
		int16_t val = $nc(($cast($Short, this->typeCache)))->shortValue();
		useTypeCache();
		return val;
	}
	setRadix(radix);
	clearCaches();
	try {
		$var($String, s, next($(integerPattern())));
		if ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) {
			$assign(s, processIntegerToken(s));
		}
		return $Short::parseShort(s, radix);
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		this->position = $nc(this->matcher)->start();
		$throwNew($InputMismatchException, $(nfe->getMessage()));
	}
	$shouldNotReachHere();
}

bool Scanner::hasNextInt() {
	return hasNextInt(this->defaultRadix);
}

bool Scanner::hasNextInt(int32_t radix) {
	setRadix(radix);
	bool result = hasNext($(integerPattern()));
	if (result) {
		try {
			$var($String, s, ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) ? processIntegerToken(this->hasNextResult) : this->hasNextResult);
			$set(this, typeCache, $Integer::valueOf($Integer::parseInt(s, radix)));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			result = false;
		}
	}
	return result;
}

$String* Scanner::processIntegerToken($String* token) {
	$var($String, result, $nc(token)->replaceAll($$str({""_s, this->groupSeparator}), ""_s));
	bool isNegative = false;
	int32_t preLen = $nc(this->negativePrefix)->length();
	if ((preLen > 0) && result->startsWith(this->negativePrefix)) {
		isNegative = true;
		$assign(result, result->substring(preLen));
	}
	int32_t sufLen = $nc(this->negativeSuffix)->length();
	if ((sufLen > 0) && result->endsWith(this->negativeSuffix)) {
		isNegative = true;
		int32_t var$0 = result->length() - sufLen;
		$assign(result, result->substring(var$0, result->length()));
	}
	if (isNegative) {
		$assign(result, $str({"-"_s, result}));
	}
	return result;
}

int32_t Scanner::nextInt() {
	return nextInt(this->defaultRadix);
}

int32_t Scanner::nextInt(int32_t radix) {
	if ((this->typeCache != nullptr) && ($instanceOf($Integer, this->typeCache)) && this->radix$ == radix) {
		int32_t val = $nc(($cast($Integer, this->typeCache)))->intValue();
		useTypeCache();
		return val;
	}
	setRadix(radix);
	clearCaches();
	try {
		$var($String, s, next($(integerPattern())));
		if ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) {
			$assign(s, processIntegerToken(s));
		}
		return $Integer::parseInt(s, radix);
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		this->position = $nc(this->matcher)->start();
		$throwNew($InputMismatchException, $(nfe->getMessage()));
	}
	$shouldNotReachHere();
}

bool Scanner::hasNextLong() {
	return hasNextLong(this->defaultRadix);
}

bool Scanner::hasNextLong(int32_t radix) {
	setRadix(radix);
	bool result = hasNext($(integerPattern()));
	if (result) {
		try {
			$var($String, s, ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) ? processIntegerToken(this->hasNextResult) : this->hasNextResult);
			$set(this, typeCache, $Long::valueOf($Long::parseLong(s, radix)));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			result = false;
		}
	}
	return result;
}

int64_t Scanner::nextLong() {
	return nextLong(this->defaultRadix);
}

int64_t Scanner::nextLong(int32_t radix) {
	if ((this->typeCache != nullptr) && ($instanceOf($Long, this->typeCache)) && this->radix$ == radix) {
		int64_t val = $nc(($cast($Long, this->typeCache)))->longValue();
		useTypeCache();
		return val;
	}
	setRadix(radix);
	clearCaches();
	try {
		$var($String, s, next($(integerPattern())));
		if ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) {
			$assign(s, processIntegerToken(s));
		}
		return $Long::parseLong(s, radix);
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		this->position = $nc(this->matcher)->start();
		$throwNew($InputMismatchException, $(nfe->getMessage()));
	}
	$shouldNotReachHere();
}

$String* Scanner::processFloatToken($String* token) {
	$var($String, result, $nc(token)->replaceAll(this->groupSeparator, ""_s));
	if (!$nc(this->decimalSeparator)->equals("\\."_s)) {
		$assign(result, result->replaceAll(this->decimalSeparator, "."_s));
	}
	bool isNegative = false;
	int32_t preLen = $nc(this->negativePrefix)->length();
	if ((preLen > 0) && result->startsWith(this->negativePrefix)) {
		isNegative = true;
		$assign(result, result->substring(preLen));
	}
	int32_t sufLen = $nc(this->negativeSuffix)->length();
	if ((sufLen > 0) && result->endsWith(this->negativeSuffix)) {
		isNegative = true;
		int32_t var$0 = result->length() - sufLen;
		$assign(result, result->substring(var$0, result->length()));
	}
	if (result->equals(this->nanString)) {
		$assign(result, "NaN"_s);
	}
	if (result->equals(this->infinityString)) {
		$assign(result, "Infinity"_s);
	}
	if (isNegative) {
		$assign(result, $str({"-"_s, result}));
	}
	$var($Matcher, m, $nc(Scanner::NON_ASCII_DIGIT)->matcher(result));
	if ($nc(m)->find()) {
		$var($StringBuilder, inASCII, $new($StringBuilder));
		for (int32_t i = 0; i < result->length(); ++i) {
			char16_t nextChar = result->charAt(i);
			if ($Character::isDigit(nextChar)) {
				int32_t d = $Character::digit(nextChar, 10);
				if (d != -1) {
					inASCII->append(d);
				} else {
					inASCII->append(nextChar);
				}
			} else {
				inASCII->append(nextChar);
			}
		}
		$assign(result, inASCII->toString());
	}
	return result;
}

bool Scanner::hasNextFloat() {
	setRadix(10);
	bool result = hasNext($(floatPattern()));
	if (result) {
		try {
			$var($String, s, processFloatToken(this->hasNextResult));
			$set(this, typeCache, $Float::valueOf($Float::parseFloat(s)));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			result = false;
		}
	}
	return result;
}

float Scanner::nextFloat() {
	if ((this->typeCache != nullptr) && ($instanceOf($Float, this->typeCache))) {
		float val = $nc(($cast($Float, this->typeCache)))->floatValue();
		useTypeCache();
		return val;
	}
	setRadix(10);
	clearCaches();
	try {
		return $Float::parseFloat($(processFloatToken($(next($(floatPattern()))))));
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		this->position = $nc(this->matcher)->start();
		$throwNew($InputMismatchException, $(nfe->getMessage()));
	}
	$shouldNotReachHere();
}

bool Scanner::hasNextDouble() {
	setRadix(10);
	bool result = hasNext($(floatPattern()));
	if (result) {
		try {
			$var($String, s, processFloatToken(this->hasNextResult));
			$set(this, typeCache, $Double::valueOf($Double::parseDouble(s)));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			result = false;
		}
	}
	return result;
}

double Scanner::nextDouble() {
	if ((this->typeCache != nullptr) && ($instanceOf($Double, this->typeCache))) {
		double val = $nc(($cast($Double, this->typeCache)))->doubleValue();
		useTypeCache();
		return val;
	}
	setRadix(10);
	clearCaches();
	try {
		return $Double::parseDouble($(processFloatToken($(next($(floatPattern()))))));
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		this->position = $nc(this->matcher)->start();
		$throwNew($InputMismatchException, $(nfe->getMessage()));
	}
	$shouldNotReachHere();
}

bool Scanner::hasNextBigInteger() {
	return hasNextBigInteger(this->defaultRadix);
}

bool Scanner::hasNextBigInteger(int32_t radix) {
	setRadix(radix);
	bool result = hasNext($(integerPattern()));
	if (result) {
		try {
			$var($String, s, ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) ? processIntegerToken(this->hasNextResult) : this->hasNextResult);
			$set(this, typeCache, $new($BigInteger, s, radix));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			result = false;
		}
	}
	return result;
}

$BigInteger* Scanner::nextBigInteger() {
	return nextBigInteger(this->defaultRadix);
}

$BigInteger* Scanner::nextBigInteger(int32_t radix) {
	{
		$var($BigInteger, val, nullptr);
		bool var$0 = (this->typeCache != nullptr);
		if (var$0) {
			$var($Object, patt104378$temp, this->typeCache);
			bool var$1 = $instanceOf($BigInteger, patt104378$temp);
			if (var$1) {
				$assign(val, $cast($BigInteger, patt104378$temp));
				var$1 = true;
			}
			var$0 = (var$1);
		}
		if (var$0 && this->radix$ == radix) {
			useTypeCache();
			return val;
		}
	}
	setRadix(radix);
	clearCaches();
	try {
		$var($String, s, next($(integerPattern())));
		if ($nc(this->matcher)->group(this->SIMPLE_GROUP_INDEX) == nullptr) {
			$assign(s, processIntegerToken(s));
		}
		return $new($BigInteger, s, radix);
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		this->position = $nc(this->matcher)->start();
		$throwNew($InputMismatchException, $(nfe->getMessage()));
	}
	$shouldNotReachHere();
}

bool Scanner::hasNextBigDecimal() {
	setRadix(10);
	bool result = hasNext($(decimalPattern()));
	if (result) {
		try {
			$var($String, s, processFloatToken(this->hasNextResult));
			$set(this, typeCache, $new($BigDecimal, s));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, nfe, $catch());
			result = false;
		}
	}
	return result;
}

$BigDecimal* Scanner::nextBigDecimal() {
	{
		$var($BigDecimal, val, nullptr);
		bool var$0 = (this->typeCache != nullptr);
		if (var$0) {
			$var($Object, patt106878$temp, this->typeCache);
			bool var$1 = $instanceOf($BigDecimal, patt106878$temp);
			if (var$1) {
				$assign(val, $cast($BigDecimal, patt106878$temp));
				var$1 = true;
			}
			var$0 = (var$1);
		}
		if (var$0) {
			useTypeCache();
			return val;
		}
	}
	setRadix(10);
	clearCaches();
	try {
		$var($String, s, processFloatToken($(next($(decimalPattern())))));
		return $new($BigDecimal, s);
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, nfe, $catch());
		this->position = $nc(this->matcher)->start();
		$throwNew($InputMismatchException, $(nfe->getMessage()));
	}
	$shouldNotReachHere();
}

Scanner* Scanner::reset() {
	$set(this, delimPattern, Scanner::WHITESPACE_PATTERN);
	$init($Locale$Category);
	useLocale($($Locale::getDefault($Locale$Category::FORMAT)));
	useRadix(10);
	clearCaches();
	++this->modCount;
	return this;
}

$Stream* Scanner::tokens() {
	ensureOpen();
	$var($Stream, stream, $StreamSupport::stream($$new($Scanner$TokenSpliterator, this), false));
	return $cast($Stream, $nc(stream)->onClose(static_cast<$Runnable*>($$new(Scanner$$Lambda$close, this))));
}

$Stream* Scanner::findAll($Pattern* pattern) {
	$Objects::requireNonNull(pattern);
	ensureOpen();
	$var($Stream, stream, $StreamSupport::stream($$new($Scanner$FindSpliterator, this, pattern), false));
	return $cast($Stream, $nc(stream)->onClose(static_cast<$Runnable*>($$new(Scanner$$Lambda$close, this))));
}

$Stream* Scanner::findAll($String* patString) {
	$Objects::requireNonNull(patString);
	ensureOpen();
	return findAll($($nc(this->patternCache)->forName(patString)));
}

void clinit$Scanner($Class* class$) {
	$assignStatic(Scanner::BOOLEAN_PATTERN, "true|false"_s);
	$assignStatic(Scanner::LINE_SEPARATOR_PATTERN, u"\r\n|[\n\r\u2028\u2029\u0085]"_s);
	$assignStatic(Scanner::LINE_PATTERN, $str({".*("_s, Scanner::LINE_SEPARATOR_PATTERN, ")|.+$"_s}));
	Scanner::$assertionsDisabled = !Scanner::class$->desiredAssertionStatus();
	$assignStatic(Scanner::WHITESPACE_PATTERN, $Pattern::compile("\\p{javaWhitespace}+"_s));
	$assignStatic(Scanner::FIND_ANY_PATTERN, $Pattern::compile("(?s).*"_s));
	$assignStatic(Scanner::NON_ASCII_DIGIT, $Pattern::compile("[\\p{javaDigit}&&[^0-9]]"_s));
}

Scanner::Scanner() {
}

$Class* Scanner::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Scanner$$Lambda$close::classInfo$.name)) {
			return Scanner$$Lambda$close::load$(name, initialize);
		}
	}
	$loadClass(Scanner, name, initialize, &_Scanner_ClassInfo_, clinit$Scanner, allocate$Scanner);
	return class$;
}

$Class* Scanner::class$ = nullptr;

	} // util
} // java