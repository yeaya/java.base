#include <jdk/internal/icu/impl/CharTrie.h>

#include <java/io/DataInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/Trie$DataManipulate.h>
#include <jdk/internal/icu/impl/Trie.h>
#include <jdk/internal/icu/text/UTF16.h>
#include <jcpp.h>

#undef INDEX_STAGE_1_SHIFT_
#undef INDEX_STAGE_3_MASK_
#undef LEAD_SURROGATE_MIN_VALUE
#undef INDEX_STAGE_2_SHIFT_
#undef SURROGATE_MASK_

using $DataInputStream = ::java::io::DataInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Trie = ::jdk::internal::icu::impl::Trie;
using $Trie$DataManipulate = ::jdk::internal::icu::impl::Trie$DataManipulate;
using $UTF16 = ::jdk::internal::icu::text::UTF16;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _CharTrie_FieldInfo_[] = {
	{"m_initialValue_", "C", nullptr, $PRIVATE, $field(CharTrie, m_initialValue_)},
	{"m_data_", "[C", nullptr, $PRIVATE, $field(CharTrie, m_data_)},
	{}
};

$MethodInfo _CharTrie_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljdk/internal/icu/impl/Trie$DataManipulate;)V", nullptr, $PUBLIC, $method(static_cast<void(CharTrie::*)($InputStream*,$Trie$DataManipulate*)>(&CharTrie::init$)), "java.io.IOException"},
	{"getCodePointValue", "(I)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(CharTrie::*)(int32_t)>(&CharTrie::getCodePointValue))},
	{"getLeadValue", "(C)C", nullptr, $PUBLIC | $FINAL, $method(static_cast<char16_t(CharTrie::*)(char16_t)>(&CharTrie::getLeadValue))},
	{"getSurrogateOffset", "(CC)I", nullptr, $PROTECTED | $FINAL},
	{"unserialize", "(Ljava/io/InputStream;)V", nullptr, $PROTECTED | $FINAL, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _CharTrie_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.icu.impl.CharTrie",
	"jdk.internal.icu.impl.Trie",
	nullptr,
	_CharTrie_FieldInfo_,
	_CharTrie_MethodInfo_
};

$Object* allocate$CharTrie($Class* clazz) {
	return $of($alloc(CharTrie));
}

void CharTrie::init$($InputStream* inputStream, $Trie$DataManipulate* dataManipulate) {
	$Trie::init$(inputStream, dataManipulate);
	if (!isCharTrie()) {
		$throwNew($IllegalArgumentException, "Data given does not belong to a char trie."_s);
	}
}

char16_t CharTrie::getCodePointValue(int32_t ch) {
	int32_t offset = 0;
	if (0 <= ch && ch < $UTF16::LEAD_SURROGATE_MIN_VALUE) {
		offset = ($sl((int32_t)$nc(this->m_index_)->get($sr(ch, $Trie::INDEX_STAGE_1_SHIFT_)), $Trie::INDEX_STAGE_2_SHIFT_)) + ((int32_t)(ch & (uint32_t)$Trie::INDEX_STAGE_3_MASK_));
		return $nc(this->m_data_)->get(offset);
	}
	offset = getCodePointOffset(ch);
	return (offset >= 0) ? $nc(this->m_data_)->get(offset) : this->m_initialValue_;
}

char16_t CharTrie::getLeadValue(char16_t ch) {
	return $nc(this->m_data_)->get(getLeadOffset(ch));
}

void CharTrie::unserialize($InputStream* inputStream) {
	$var($DataInputStream, input, $new($DataInputStream, inputStream));
	int32_t indexDataLength = this->m_dataOffset_ + this->m_dataLength_;
	$set(this, m_index_, $new($chars, indexDataLength));
	for (int32_t i = 0; i < indexDataLength; ++i) {
		$nc(this->m_index_)->set(i, input->readChar());
	}
	$set(this, m_data_, this->m_index_);
	this->m_initialValue_ = $nc(this->m_data_)->get(this->m_dataOffset_);
}

int32_t CharTrie::getSurrogateOffset(char16_t lead, char16_t trail) {
	if (this->m_dataManipulate_ == nullptr) {
		$throwNew($NullPointerException, "The field DataManipulate in this Trie is null"_s);
	}
	int32_t offset = $nc(this->m_dataManipulate_)->getFoldingOffset(getLeadValue(lead));
	if (offset > 0) {
		return getRawOffset(offset, (char16_t)((int32_t)(trail & (uint32_t)$Trie::SURROGATE_MASK_)));
	}
	return -1;
}

CharTrie::CharTrie() {
}

$Class* CharTrie::load$($String* name, bool initialize) {
	$loadClass(CharTrie, name, initialize, &_CharTrie_ClassInfo_, allocate$CharTrie);
	return class$;
}

$Class* CharTrie::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk