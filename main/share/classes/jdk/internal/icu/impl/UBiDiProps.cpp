#include <jdk/internal/icu/impl/UBiDiProps.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/MissingResourceException.h>
#include <jdk/internal/icu/impl/ICUBinary$Authenticate.h>
#include <jdk/internal/icu/impl/ICUBinary.h>
#include <jdk/internal/icu/impl/Trie2_16.h>
#include <jdk/internal/icu/impl/UBiDiProps$IsAcceptable.h>
#include <jdk/internal/icu/lang/UCharacter$JoiningGroup.h>
#include <jdk/internal/icu/util/VersionInfo.h>
#include <jcpp.h>

#undef BPT_MASK
#undef BPT_SHIFT
#undef CLASS_MASK
#undef DATA_FILE_NAME
#undef ESC_MIRROR_DELTA
#undef FMT
#undef ICU_DATA_VERSION_PATH
#undef INSTANCE
#undef IX_JG_LIMIT
#undef IX_JG_LIMIT2
#undef IX_JG_START
#undef IX_JG_START2
#undef IX_MIRROR_LENGTH
#undef IX_TOP
#undef IX_TRIE_SIZE
#undef JT_MASK
#undef JT_SHIFT
#undef MIRROR_DELTA_SHIFT
#undef MIRROR_INDEX_SHIFT
#undef NO_JOINING_GROUP

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ICUBinary = ::jdk::internal::icu::impl::ICUBinary;
using $ICUBinary$Authenticate = ::jdk::internal::icu::impl::ICUBinary$Authenticate;
using $Trie2_16 = ::jdk::internal::icu::impl::Trie2_16;
using $UBiDiProps$IsAcceptable = ::jdk::internal::icu::impl::UBiDiProps$IsAcceptable;
using $UCharacter$JoiningGroup = ::jdk::internal::icu::lang::UCharacter$JoiningGroup;
using $VersionInfo = ::jdk::internal::icu::util::VersionInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _UBiDiProps_FieldInfo_[] = {
	{"indexes", "[I", nullptr, $PRIVATE, $field(UBiDiProps, indexes)},
	{"mirrors", "[I", nullptr, $PRIVATE, $field(UBiDiProps, mirrors)},
	{"jgArray", "[B", nullptr, $PRIVATE, $field(UBiDiProps, jgArray)},
	{"jgArray2", "[B", nullptr, $PRIVATE, $field(UBiDiProps, jgArray2)},
	{"trie", "Ljdk/internal/icu/impl/Trie2_16;", nullptr, $PRIVATE, $field(UBiDiProps, trie)},
	{"DATA_FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UBiDiProps, DATA_FILE_NAME)},
	{"FMT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, FMT)},
	{"IX_TRIE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, IX_TRIE_SIZE)},
	{"IX_MIRROR_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, IX_MIRROR_LENGTH)},
	{"IX_JG_START", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, IX_JG_START)},
	{"IX_JG_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, IX_JG_LIMIT)},
	{"IX_JG_START2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, IX_JG_START2)},
	{"IX_JG_LIMIT2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, IX_JG_LIMIT2)},
	{"IX_TOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, IX_TOP)},
	{"JT_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, JT_SHIFT)},
	{"BPT_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, BPT_SHIFT)},
	{"MIRROR_DELTA_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, MIRROR_DELTA_SHIFT)},
	{"CLASS_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, CLASS_MASK)},
	{"JT_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, JT_MASK)},
	{"BPT_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, BPT_MASK)},
	{"ESC_MIRROR_DELTA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, ESC_MIRROR_DELTA)},
	{"MIRROR_INDEX_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UBiDiProps, MIRROR_INDEX_SHIFT)},
	{"INSTANCE", "Ljdk/internal/icu/impl/UBiDiProps;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(UBiDiProps, INSTANCE)},
	{}
};

$MethodInfo _UBiDiProps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UBiDiProps::*)()>(&UBiDiProps::init$)), "java.io.IOException"},
	{"getClass", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(UBiDiProps::*)(int32_t)>(&UBiDiProps::getClass))},
	{"getClassFromProps", "(I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&UBiDiProps::getClassFromProps))},
	{"getFlagFromProps", "(II)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t,int32_t)>(&UBiDiProps::getFlagFromProps))},
	{"getJoiningGroup", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(UBiDiProps::*)(int32_t)>(&UBiDiProps::getJoiningGroup))},
	{"getJoiningType", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(UBiDiProps::*)(int32_t)>(&UBiDiProps::getJoiningType))},
	{"getMirror", "(II)I", nullptr, $PRIVATE | $FINAL, $method(static_cast<int32_t(UBiDiProps::*)(int32_t,int32_t)>(&UBiDiProps::getMirror))},
	{"getMirror", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(UBiDiProps::*)(int32_t)>(&UBiDiProps::getMirror))},
	{"getMirrorCodePoint", "(I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&UBiDiProps::getMirrorCodePoint))},
	{"getMirrorDeltaFromProps", "(I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&UBiDiProps::getMirrorDeltaFromProps))},
	{"getMirrorIndex", "(I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&UBiDiProps::getMirrorIndex))},
	{"getPairedBracket", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(UBiDiProps::*)(int32_t)>(&UBiDiProps::getPairedBracket))},
	{"getPairedBracketType", "(I)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(UBiDiProps::*)(int32_t)>(&UBiDiProps::getPairedBracketType))},
	{"readData", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(UBiDiProps::*)($ByteBuffer*)>(&UBiDiProps::readData)), "java.io.IOException"},
	{}
};

$InnerClassInfo _UBiDiProps_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.UBiDiProps$IsAcceptable", "jdk.internal.icu.impl.UBiDiProps", "IsAcceptable", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _UBiDiProps_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.UBiDiProps",
	"java.lang.Object",
	nullptr,
	_UBiDiProps_FieldInfo_,
	_UBiDiProps_MethodInfo_,
	nullptr,
	nullptr,
	_UBiDiProps_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.UBiDiProps$IsAcceptable"
};

$Object* allocate$UBiDiProps($Class* clazz) {
	return $of($alloc(UBiDiProps));
}

$String* UBiDiProps::DATA_FILE_NAME = nullptr;
UBiDiProps* UBiDiProps::INSTANCE = nullptr;

void UBiDiProps::init$() {
	$var($ByteBuffer, bytes, $ICUBinary::getRequiredData(UBiDiProps::DATA_FILE_NAME));
	readData(bytes);
}

void UBiDiProps::readData($ByteBuffer* bytes) {
	$ICUBinary::readHeader(bytes, UBiDiProps::FMT, static_cast<$ICUBinary$Authenticate*>($$new($UBiDiProps$IsAcceptable)));
	int32_t i = 0;
	int32_t count = 0;
	count = $nc(bytes)->getInt();
	if (count < UBiDiProps::IX_TOP) {
		$throwNew($IOException, $$str({"indexes[0] too small in "_s, UBiDiProps::DATA_FILE_NAME}));
	}
	$set(this, indexes, $new($ints, count));
	$nc(this->indexes)->set(0, count);
	for (i = 1; i < count; ++i) {
		$nc(this->indexes)->set(i, bytes->getInt());
	}
	$set(this, trie, $Trie2_16::createFromSerialized(bytes));
	int32_t expectedTrieLength = $nc(this->indexes)->get(UBiDiProps::IX_TRIE_SIZE);
	int32_t trieLength = $nc(this->trie)->getSerializedLength();
	if (trieLength > expectedTrieLength) {
		$throwNew($IOException, $$str({UBiDiProps::DATA_FILE_NAME, ": not enough bytes for the trie"_s}));
	}
	$ICUBinary::skipBytes(bytes, expectedTrieLength - trieLength);
	count = $nc(this->indexes)->get(UBiDiProps::IX_MIRROR_LENGTH);
	if (count > 0) {
		$set(this, mirrors, $new($ints, count));
		for (i = 0; i < count; ++i) {
			$nc(this->mirrors)->set(i, bytes->getInt());
		}
	}
	count = $nc(this->indexes)->get(UBiDiProps::IX_JG_LIMIT) - $nc(this->indexes)->get(UBiDiProps::IX_JG_START);
	$set(this, jgArray, $new($bytes, count));
	for (i = 0; i < count; ++i) {
		$nc(this->jgArray)->set(i, bytes->get());
	}
	count = $nc(this->indexes)->get(UBiDiProps::IX_JG_LIMIT2) - $nc(this->indexes)->get(UBiDiProps::IX_JG_START2);
	$set(this, jgArray2, $new($bytes, count));
	for (i = 0; i < count; ++i) {
		$nc(this->jgArray2)->set(i, bytes->get());
	}
}

int32_t UBiDiProps::getClass(int32_t c) {
	return getClassFromProps($nc(this->trie)->get(c));
}

int32_t UBiDiProps::getMirror(int32_t c, int32_t props) {
	int32_t delta = getMirrorDeltaFromProps(props);
	if (delta != UBiDiProps::ESC_MIRROR_DELTA) {
		return c + delta;
	} else {
		int32_t m = 0;
		int32_t i = 0;
		int32_t length = 0;
		int32_t c2 = 0;
		length = $nc(this->indexes)->get(UBiDiProps::IX_MIRROR_LENGTH);
		for (i = 0; i < length; ++i) {
			m = $nc(this->mirrors)->get(i);
			c2 = getMirrorCodePoint(m);
			if (c == c2) {
				return getMirrorCodePoint($nc(this->mirrors)->get(getMirrorIndex(m)));
			} else if (c < c2) {
				break;
			}
		}
		return c;
	}
}

int32_t UBiDiProps::getMirror(int32_t c) {
	int32_t props = $nc(this->trie)->get(c);
	return getMirror(c, props);
}

int32_t UBiDiProps::getJoiningType(int32_t c) {
	return $sr((int32_t)($nc(this->trie)->get(c) & (uint32_t)UBiDiProps::JT_MASK), UBiDiProps::JT_SHIFT);
}

int32_t UBiDiProps::getJoiningGroup(int32_t c) {
	int32_t start = 0;
	int32_t limit = 0;
	start = $nc(this->indexes)->get(UBiDiProps::IX_JG_START);
	limit = $nc(this->indexes)->get(UBiDiProps::IX_JG_LIMIT);
	if (start <= c && c < limit) {
		return (int32_t)((int32_t)$nc(this->jgArray)->get(c - start) & (uint32_t)255);
	}
	start = $nc(this->indexes)->get(UBiDiProps::IX_JG_START2);
	limit = $nc(this->indexes)->get(UBiDiProps::IX_JG_LIMIT2);
	if (start <= c && c < limit) {
		return (int32_t)((int32_t)$nc(this->jgArray2)->get(c - start) & (uint32_t)255);
	}
	return $UCharacter$JoiningGroup::NO_JOINING_GROUP;
}

int32_t UBiDiProps::getPairedBracketType(int32_t c) {
	return $sr((int32_t)($nc(this->trie)->get(c) & (uint32_t)UBiDiProps::BPT_MASK), UBiDiProps::BPT_SHIFT);
}

int32_t UBiDiProps::getPairedBracket(int32_t c) {
	int32_t props = $nc(this->trie)->get(c);
	if (((int32_t)(props & (uint32_t)UBiDiProps::BPT_MASK)) == 0) {
		return c;
	} else {
		return getMirror(c, props);
	}
}

int32_t UBiDiProps::getClassFromProps(int32_t props) {
	$init(UBiDiProps);
	return (int32_t)(props & (uint32_t)UBiDiProps::CLASS_MASK);
}

bool UBiDiProps::getFlagFromProps(int32_t props, int32_t shift) {
	$init(UBiDiProps);
	return ((int32_t)(($sr(props, shift)) & (uint32_t)1)) != 0;
}

int32_t UBiDiProps::getMirrorDeltaFromProps(int32_t props) {
	$init(UBiDiProps);
	return $sr((int32_t)(int16_t)props, UBiDiProps::MIRROR_DELTA_SHIFT);
}

int32_t UBiDiProps::getMirrorCodePoint(int32_t m) {
	$init(UBiDiProps);
	return (int32_t)(m & (uint32_t)0x001FFFFF);
}

int32_t UBiDiProps::getMirrorIndex(int32_t m) {
	$init(UBiDiProps);
	return $usr(m, UBiDiProps::MIRROR_INDEX_SHIFT);
}

void clinit$UBiDiProps($Class* class$) {
	$init($VersionInfo);
	$assignStatic(UBiDiProps::DATA_FILE_NAME, $str({"/jdk/internal/icu/impl/data/icudt"_s, $VersionInfo::ICU_DATA_VERSION_PATH, "/ubidi.icu"_s}));
	{
		try {
			$assignStatic(UBiDiProps::INSTANCE, $new(UBiDiProps));
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$throwNew($MissingResourceException, $(e->getMessage()), UBiDiProps::DATA_FILE_NAME, ""_s);
		}
	}
}

UBiDiProps::UBiDiProps() {
}

$Class* UBiDiProps::load$($String* name, bool initialize) {
	$loadClass(UBiDiProps, name, initialize, &_UBiDiProps_ClassInfo_, clinit$UBiDiProps, allocate$UBiDiProps);
	return class$;
}

$Class* UBiDiProps::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk