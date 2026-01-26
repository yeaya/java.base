#include <jdk/internal/icu/impl/Trie.h>

#include <java/io/DataInputStream.h>
#include <java/io/InputStream.h>
#include <jdk/internal/icu/impl/Trie$DataManipulate.h>
#include <jdk/internal/icu/impl/Trie$DefaultGetFoldingOffset.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jdk/internal/icu/text/UTF16.h>
#include <jcpp.h>

#undef DATA_BLOCK_LENGTH
#undef HEADER_OPTIONS_DATA_IS_32_BIT_
#undef HEADER_OPTIONS_INDEX_SHIFT_
#undef HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_
#undef HEADER_OPTIONS_SHIFT_MASK_
#undef HEADER_SIGNATURE_
#undef INDEX_STAGE_1_SHIFT_
#undef INDEX_STAGE_2_SHIFT_
#undef INDEX_STAGE_3_MASK_
#undef LEAD_INDEX_OFFSET_
#undef LEAD_SURROGATE_MAX_VALUE
#undef LEAD_SURROGATE_MIN_VALUE
#undef MAX_VALUE
#undef SUPPLEMENTARY_MIN_VALUE
#undef SURROGATE_MASK_

using $DataInputStream = ::java::io::DataInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Trie$DataManipulate = ::jdk::internal::icu::impl::Trie$DataManipulate;
using $Trie$DefaultGetFoldingOffset = ::jdk::internal::icu::impl::Trie$DefaultGetFoldingOffset;
using $UCharacter = ::jdk::internal::icu::lang::UCharacter;
using $UTF16 = ::jdk::internal::icu::text::UTF16;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _Trie_FieldInfo_[] = {
	{"LEAD_INDEX_OFFSET_", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, LEAD_INDEX_OFFSET_)},
	{"INDEX_STAGE_1_SHIFT_", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, INDEX_STAGE_1_SHIFT_)},
	{"INDEX_STAGE_2_SHIFT_", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, INDEX_STAGE_2_SHIFT_)},
	{"DATA_BLOCK_LENGTH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, DATA_BLOCK_LENGTH)},
	{"INDEX_STAGE_3_MASK_", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, INDEX_STAGE_3_MASK_)},
	{"SURROGATE_MASK_", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, SURROGATE_MASK_)},
	{"m_index_", "[C", nullptr, $PROTECTED, $field(Trie, m_index_)},
	{"m_dataManipulate_", "Ljdk/internal/icu/impl/Trie$DataManipulate;", nullptr, $PROTECTED, $field(Trie, m_dataManipulate_)},
	{"m_dataOffset_", "I", nullptr, $PROTECTED, $field(Trie, m_dataOffset_)},
	{"m_dataLength_", "I", nullptr, $PROTECTED, $field(Trie, m_dataLength_)},
	{"HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_)},
	{"HEADER_SIGNATURE_", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, HEADER_SIGNATURE_)},
	{"HEADER_OPTIONS_SHIFT_MASK_", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Trie, HEADER_OPTIONS_SHIFT_MASK_)},
	{"HEADER_OPTIONS_INDEX_SHIFT_", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, HEADER_OPTIONS_INDEX_SHIFT_)},
	{"HEADER_OPTIONS_DATA_IS_32_BIT_", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(Trie, HEADER_OPTIONS_DATA_IS_32_BIT_)},
	{"m_isLatin1Linear_", "Z", nullptr, $PRIVATE, $field(Trie, m_isLatin1Linear_)},
	{"m_options_", "I", nullptr, $PRIVATE, $field(Trie, m_options_)},
	{}
};

$MethodInfo _Trie_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljdk/internal/icu/impl/Trie$DataManipulate;)V", nullptr, $PROTECTED, $method(Trie, init$, void, $InputStream*, $Trie$DataManipulate*), "java.io.IOException"},
	{"checkHeader", "(I)Z", nullptr, $PRIVATE | $FINAL, $method(Trie, checkHeader, bool, int32_t)},
	{"getBMPOffset", "(C)I", nullptr, $PROTECTED | $FINAL, $method(Trie, getBMPOffset, int32_t, char16_t)},
	{"getCodePointOffset", "(I)I", nullptr, $PROTECTED | $FINAL, $method(Trie, getCodePointOffset, int32_t, int32_t)},
	{"getLeadOffset", "(C)I", nullptr, $PROTECTED | $FINAL, $method(Trie, getLeadOffset, int32_t, char16_t)},
	{"getRawOffset", "(IC)I", nullptr, $PROTECTED | $FINAL, $method(Trie, getRawOffset, int32_t, int32_t, char16_t)},
	{"getSurrogateOffset", "(CC)I", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(Trie, getSurrogateOffset, int32_t, char16_t, char16_t)},
	{"isCharTrie", "()Z", nullptr, $PROTECTED | $FINAL, $method(Trie, isCharTrie, bool)},
	{"unserialize", "(Ljava/io/InputStream;)V", nullptr, $PROTECTED, $virtualMethod(Trie, unserialize, void, $InputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _Trie_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Trie$DefaultGetFoldingOffset", "jdk.internal.icu.impl.Trie", "DefaultGetFoldingOffset", $PRIVATE | $STATIC},
	{"jdk.internal.icu.impl.Trie$DataManipulate", "jdk.internal.icu.impl.Trie", "DataManipulate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Trie_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.icu.impl.Trie",
	"java.lang.Object",
	nullptr,
	_Trie_FieldInfo_,
	_Trie_MethodInfo_,
	nullptr,
	nullptr,
	_Trie_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Trie$DefaultGetFoldingOffset,jdk.internal.icu.impl.Trie$DataManipulate"
};

$Object* allocate$Trie($Class* clazz) {
	return $of($alloc(Trie));
}

void Trie::init$($InputStream* inputStream, $Trie$DataManipulate* dataManipulate) {
	$var($DataInputStream, input, $new($DataInputStream, inputStream));
	int32_t signature = input->readInt();
	this->m_options_ = input->readInt();
	if (!checkHeader(signature)) {
		$throwNew($IllegalArgumentException, "ICU data file error: Trie header authentication failed, please check if you have the most updated ICU data file"_s);
	}
	if (dataManipulate != nullptr) {
		$set(this, m_dataManipulate_, dataManipulate);
	} else {
		$set(this, m_dataManipulate_, $new($Trie$DefaultGetFoldingOffset));
	}
	this->m_isLatin1Linear_ = ((int32_t)(this->m_options_ & (uint32_t)Trie::HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_)) != 0;
	this->m_dataOffset_ = input->readInt();
	this->m_dataLength_ = input->readInt();
	unserialize(inputStream);
}

int32_t Trie::getRawOffset(int32_t offset, char16_t ch) {
	return ($sl((int32_t)$nc(this->m_index_)->get(offset + ($sr((int32_t)ch, Trie::INDEX_STAGE_1_SHIFT_))), Trie::INDEX_STAGE_2_SHIFT_)) + ((int32_t)(ch & (uint32_t)Trie::INDEX_STAGE_3_MASK_));
}

int32_t Trie::getBMPOffset(char16_t ch) {
	return (ch >= $UTF16::LEAD_SURROGATE_MIN_VALUE && ch <= $UTF16::LEAD_SURROGATE_MAX_VALUE) ? getRawOffset(Trie::LEAD_INDEX_OFFSET_, ch) : getRawOffset(0, ch);
}

int32_t Trie::getLeadOffset(char16_t ch) {
	return getRawOffset(0, ch);
}

int32_t Trie::getCodePointOffset(int32_t ch) {
	if (ch < 0) {
		return -1;
	} else if (ch < $UTF16::LEAD_SURROGATE_MIN_VALUE) {
		return getRawOffset(0, (char16_t)ch);
	} else if (ch < $UTF16::SUPPLEMENTARY_MIN_VALUE) {
		return getBMPOffset((char16_t)ch);
	} else if (ch <= $UCharacter::MAX_VALUE) {
		return getSurrogateOffset($UTF16::getLeadSurrogate(ch), (char16_t)((int32_t)(ch & (uint32_t)Trie::SURROGATE_MASK_)));
	} else {
		return -1;
	}
}

void Trie::unserialize($InputStream* inputStream) {
	$set(this, m_index_, $new($chars, this->m_dataOffset_));
	$var($DataInputStream, input, $new($DataInputStream, inputStream));
	for (int32_t i = 0; i < this->m_dataOffset_; ++i) {
		$nc(this->m_index_)->set(i, input->readChar());
	}
}

bool Trie::isCharTrie() {
	return ((int32_t)(this->m_options_ & (uint32_t)Trie::HEADER_OPTIONS_DATA_IS_32_BIT_)) == 0;
}

bool Trie::checkHeader(int32_t signature) {
	if (signature != Trie::HEADER_SIGNATURE_) {
		return false;
	}
	if (((int32_t)(this->m_options_ & (uint32_t)Trie::HEADER_OPTIONS_SHIFT_MASK_)) != Trie::INDEX_STAGE_1_SHIFT_ || ((int32_t)(($sr(this->m_options_, Trie::HEADER_OPTIONS_INDEX_SHIFT_)) & (uint32_t)Trie::HEADER_OPTIONS_SHIFT_MASK_)) != Trie::INDEX_STAGE_2_SHIFT_) {
		return false;
	}
	return true;
}

Trie::Trie() {
}

$Class* Trie::load$($String* name, bool initialize) {
	$loadClass(Trie, name, initialize, &_Trie_ClassInfo_, allocate$Trie);
	return class$;
}

$Class* Trie::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk