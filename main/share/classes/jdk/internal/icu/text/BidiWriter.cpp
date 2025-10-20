#include <jdk/internal/icu/text/BidiWriter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jdk/internal/icu/text/BidiRun.h>
#include <jdk/internal/icu/text/UTF16.h>
#include <jcpp.h>

#undef COMBINING_SPACING_MARK
#undef DO_MIRRORING
#undef ENCLOSING_MARK
#undef INSERT_LRM_FOR_NUMERIC
#undef KEEP_BASE_COMBINING
#undef L
#undef LRM_AFTER
#undef LRM_BEFORE
#undef LRM_CHAR
#undef MASK_R_AL
#undef NON_SPACING_MARK
#undef OPTION_INSERT_MARKS
#undef OPTION_REMOVE_CONTROLS
#undef OUTPUT_REVERSE
#undef REMOVE_BIDI_CONTROLS
#undef REORDER_INVERSE_FOR_NUMBERS_SPECIAL
#undef REORDER_INVERSE_LIKE_DIRECT
#undef REORDER_INVERSE_NUMBERS_AS_L
#undef REORDER_RUNS_ONLY
#undef RLM_AFTER
#undef RLM_BEFORE
#undef RLM_CHAR

using $BidiRunArray = $Array<::jdk::internal::icu::text::BidiRun>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $UCharacter = ::jdk::internal::icu::lang::UCharacter;
using $BidiBase = ::jdk::internal::icu::text::BidiBase;
using $BidiRun = ::jdk::internal::icu::text::BidiRun;
using $UTF16 = ::jdk::internal::icu::text::UTF16;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiWriter_FieldInfo_[] = {
	{"LRM_CHAR", "C", nullptr, $STATIC | $FINAL, $constField(BidiWriter, LRM_CHAR)},
	{"RLM_CHAR", "C", nullptr, $STATIC | $FINAL, $constField(BidiWriter, RLM_CHAR)},
	{"MASK_R_AL", "I", nullptr, $STATIC | $FINAL, $constField(BidiWriter, MASK_R_AL)},
	{}
};

$MethodInfo _BidiWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BidiWriter::*)()>(&BidiWriter::init$))},
	{"IsCombining", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&BidiWriter::IsCombining))},
	{"doWriteForward", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,int32_t)>(&BidiWriter::doWriteForward))},
	{"doWriteForward", "([CIII)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($chars*,int32_t,int32_t,int32_t)>(&BidiWriter::doWriteForward))},
	{"doWriteReverse", "([CIII)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($chars*,int32_t,int32_t,int32_t)>(&BidiWriter::doWriteReverse))},
	{"writeReordered", "(Ljdk/internal/icu/text/BidiBase;I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($BidiBase*,int32_t)>(&BidiWriter::writeReordered))},
	{"writeReverse", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,int32_t)>(&BidiWriter::writeReverse))},
	{}
};

$ClassInfo _BidiWriter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.BidiWriter",
	"java.lang.Object",
	nullptr,
	_BidiWriter_FieldInfo_,
	_BidiWriter_MethodInfo_
};

$Object* allocate$BidiWriter($Class* clazz) {
	return $of($alloc(BidiWriter));
}

void BidiWriter::init$() {
}

bool BidiWriter::IsCombining(int32_t type) {
	return (((int32_t)($sl(1, type) & (uint32_t)(($sl(1, $UCharacter::NON_SPACING_MARK) | $sl(1, $UCharacter::COMBINING_SPACING_MARK)) | $sl(1, $UCharacter::ENCLOSING_MARK)))) != 0);
}

$String* BidiWriter::doWriteForward($String* src, int32_t options) {
	$useLocalCurrentObjectStackCache();
	switch ((int32_t)(options & (uint32_t)($BidiBase::REMOVE_BIDI_CONTROLS | $BidiBase::DO_MIRRORING))) {
	case 0:
		{
			{
				return src;
			}
		}
	case $BidiBase::DO_MIRRORING:
		{
			{
				$var($StringBuffer, dest, $new($StringBuffer, $nc(src)->length()));
				int32_t i = 0;
				int32_t c = 0;
				do {
					c = $UTF16::charAt(src, i);
					i += $UTF16::getCharCount(c);
					$UTF16::append(dest, $UCharacter::getMirror(c));
				} while (i < $nc(src)->length());
				return dest->toString();
			}
		}
	case $BidiBase::REMOVE_BIDI_CONTROLS:
		{
			{
				$var($StringBuilder, dest, $new($StringBuilder, $nc(src)->length()));
				int32_t i = 0;
				char16_t c = 0;
				do {
					c = $nc(src)->charAt(i++);
					if (!$BidiBase::IsBidiControlChar(c)) {
						dest->append(c);
					}
				} while (i < $nc(src)->length());
				return dest->toString();
			}
		}
	default:
		{
			{
				$var($StringBuffer, dest, $new($StringBuffer, $nc(src)->length()));
				int32_t i = 0;
				int32_t c = 0;
				do {
					c = $UTF16::charAt(src, i);
					i += $UTF16::getCharCount(c);
					if (!$BidiBase::IsBidiControlChar(c)) {
						$UTF16::append(dest, $UCharacter::getMirror(c));
					}
				} while (i < $nc(src)->length());
				return dest->toString();
			}
		}
	}
}

$String* BidiWriter::doWriteForward($chars* text, int32_t start, int32_t limit, int32_t options) {
	return doWriteForward($$new($String, text, start, limit - start), options);
}

$String* BidiWriter::writeReverse($String* src, int32_t options) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, dest, $new($StringBuffer, $nc(src)->length()));
	{
		int32_t srcLength = 0;
		switch ((int32_t)(options & (uint32_t)(($BidiBase::REMOVE_BIDI_CONTROLS | $BidiBase::DO_MIRRORING) | $BidiBase::KEEP_BASE_COMBINING))) {
		case 0:
			{
				srcLength = $nc(src)->length();
				do {
					int32_t i = srcLength;
					srcLength -= $UTF16::getCharCount($UTF16::charAt(src, srcLength - 1));
					dest->append($(src->substring(srcLength, i)));
				} while (srcLength > 0);
				break;
			}
		case $BidiBase::KEEP_BASE_COMBINING:
			{
				srcLength = src->length();
				do {
					int32_t c = 0;
					int32_t i = srcLength;
					do {
						c = $UTF16::charAt(src, srcLength - 1);
						srcLength -= $UTF16::getCharCount(c);
					} while (srcLength > 0 && IsCombining($UCharacter::getType(c)));
					dest->append($(src->substring(srcLength, i)));
				} while (srcLength > 0);
				break;
			}
		default:
			{
				srcLength = src->length();
				do {
					int32_t i = srcLength;
					int32_t c = $UTF16::charAt(src, srcLength - 1);
					srcLength -= $UTF16::getCharCount(c);
					if (((int32_t)(options & (uint32_t)(int32_t)$BidiBase::KEEP_BASE_COMBINING)) != 0) {
						while (srcLength > 0 && IsCombining($UCharacter::getType(c))) {
							c = $UTF16::charAt(src, srcLength - 1);
							srcLength -= $UTF16::getCharCount(c);
						}
					}
					if (((int32_t)(options & (uint32_t)(int32_t)$BidiBase::REMOVE_BIDI_CONTROLS)) != 0 && $BidiBase::IsBidiControlChar(c)) {
						continue;
					}
					int32_t j = srcLength;
					if (((int32_t)(options & (uint32_t)(int32_t)$BidiBase::DO_MIRRORING)) != 0) {
						c = $UCharacter::getMirror(c);
						$UTF16::append(dest, c);
						j += $UTF16::getCharCount(c);
					}
					dest->append($(src->substring(j, i)));
				} while (srcLength > 0);
				break;
			}
		}
	}
	return dest->toString();
}

$String* BidiWriter::doWriteReverse($chars* text, int32_t start, int32_t limit, int32_t options) {
	return writeReverse($$new($String, text, start, limit - start), options);
}

$String* BidiWriter::writeReordered($BidiBase* bidi, int32_t options) {
	$useLocalCurrentObjectStackCache();
	int32_t run = 0;
	int32_t runCount = 0;
	$var($StringBuilder, dest, nullptr);
	$var($chars, text, $nc(bidi)->text);
	runCount = bidi->countRuns();
	if (((int32_t)(bidi->reorderingOptions & (uint32_t)$BidiBase::OPTION_INSERT_MARKS)) != 0) {
		options |= $BidiBase::INSERT_LRM_FOR_NUMERIC;
		options &= (uint32_t)~$BidiBase::REMOVE_BIDI_CONTROLS;
	}
	if (((int32_t)(bidi->reorderingOptions & (uint32_t)$BidiBase::OPTION_REMOVE_CONTROLS)) != 0) {
		options |= $BidiBase::REMOVE_BIDI_CONTROLS;
		options &= (uint32_t)~$BidiBase::INSERT_LRM_FOR_NUMERIC;
	}
	if ((bidi->reorderingMode != $BidiBase::REORDER_INVERSE_NUMBERS_AS_L) && (bidi->reorderingMode != $BidiBase::REORDER_INVERSE_LIKE_DIRECT) && (bidi->reorderingMode != $BidiBase::REORDER_INVERSE_FOR_NUMBERS_SPECIAL) && (bidi->reorderingMode != $BidiBase::REORDER_RUNS_ONLY)) {
		options &= (uint32_t)~$BidiBase::INSERT_LRM_FOR_NUMERIC;
	}
	$assign(dest, $new($StringBuilder, ((int32_t)(options & (uint32_t)(int32_t)$BidiBase::INSERT_LRM_FOR_NUMERIC)) != 0 ? bidi->length * 2 : bidi->length));
	if (((int32_t)(options & (uint32_t)(int32_t)$BidiBase::OUTPUT_REVERSE)) == 0) {
		if (((int32_t)(options & (uint32_t)(int32_t)$BidiBase::INSERT_LRM_FOR_NUMERIC)) == 0) {
			for (run = 0; run < runCount; ++run) {
				$var($BidiRun, bidiRun, bidi->getVisualRun(run));
				if ($nc(bidiRun)->isEvenRun()) {
					dest->append($(doWriteForward(text, bidiRun->start, bidiRun->limit, (int32_t)(options & (uint32_t)~$BidiBase::DO_MIRRORING))));
				} else {
					dest->append($(doWriteReverse(text, bidiRun->start, bidiRun->limit, options)));
				}
			}
		} else {
			$var($bytes, dirProps, bidi->dirProps);
			char16_t uc = 0;
			int32_t markFlag = 0;
			for (run = 0; run < runCount; ++run) {
				$var($BidiRun, bidiRun, bidi->getVisualRun(run));
				markFlag = 0;
				markFlag = $nc($nc(bidi->runs)->get(run))->insertRemove;
				if (markFlag < 0) {
					markFlag = 0;
				}
				if ($nc(bidiRun)->isEvenRun()) {
					if (bidi->isInverse() && $nc(dirProps)->get(bidiRun->start) != $BidiBase::L) {
						markFlag |= $BidiBase::LRM_BEFORE;
					}
					if (((int32_t)(markFlag & (uint32_t)$BidiBase::LRM_BEFORE)) != 0) {
						uc = BidiWriter::LRM_CHAR;
					} else if (((int32_t)(markFlag & (uint32_t)$BidiBase::RLM_BEFORE)) != 0) {
						uc = BidiWriter::RLM_CHAR;
					} else {
						uc = (char16_t)0;
					}
					if (uc != 0) {
						dest->append(uc);
					}
					dest->append($(doWriteForward(text, bidiRun->start, bidiRun->limit, (int32_t)(options & (uint32_t)~$BidiBase::DO_MIRRORING))));
					if (bidi->isInverse() && $nc(dirProps)->get(bidiRun->limit - 1) != $BidiBase::L) {
						markFlag |= $BidiBase::LRM_AFTER;
					}
					if (((int32_t)(markFlag & (uint32_t)$BidiBase::LRM_AFTER)) != 0) {
						uc = BidiWriter::LRM_CHAR;
					} else if (((int32_t)(markFlag & (uint32_t)$BidiBase::RLM_AFTER)) != 0) {
						uc = BidiWriter::RLM_CHAR;
					} else {
						uc = (char16_t)0;
					}
					if (uc != 0) {
						dest->append(uc);
					}
				} else {
					bool var$0 = bidi->isInverse();
					if (var$0 && !bidi->testDirPropFlagAt(BidiWriter::MASK_R_AL, bidiRun->limit - 1)) {
						markFlag |= $BidiBase::RLM_BEFORE;
					}
					if (((int32_t)(markFlag & (uint32_t)$BidiBase::LRM_BEFORE)) != 0) {
						uc = BidiWriter::LRM_CHAR;
					} else if (((int32_t)(markFlag & (uint32_t)$BidiBase::RLM_BEFORE)) != 0) {
						uc = BidiWriter::RLM_CHAR;
					} else {
						uc = (char16_t)0;
					}
					if (uc != 0) {
						dest->append(uc);
					}
					dest->append($(doWriteReverse(text, bidiRun->start, bidiRun->limit, options)));
					bool var$1 = bidi->isInverse();
					if (var$1 && ((int32_t)(BidiWriter::MASK_R_AL & (uint32_t)$BidiBase::DirPropFlag($nc(dirProps)->get(bidiRun->start)))) == 0) {
						markFlag |= $BidiBase::RLM_AFTER;
					}
					if (((int32_t)(markFlag & (uint32_t)$BidiBase::LRM_AFTER)) != 0) {
						uc = BidiWriter::LRM_CHAR;
					} else if (((int32_t)(markFlag & (uint32_t)$BidiBase::RLM_AFTER)) != 0) {
						uc = BidiWriter::RLM_CHAR;
					} else {
						uc = (char16_t)0;
					}
					if (uc != 0) {
						dest->append(uc);
					}
				}
			}
		}
	} else if (((int32_t)(options & (uint32_t)(int32_t)$BidiBase::INSERT_LRM_FOR_NUMERIC)) == 0) {
		for (run = runCount; --run >= 0;) {
			$var($BidiRun, bidiRun, bidi->getVisualRun(run));
			if ($nc(bidiRun)->isEvenRun()) {
				dest->append($(doWriteReverse(text, bidiRun->start, bidiRun->limit, (int32_t)(options & (uint32_t)~$BidiBase::DO_MIRRORING))));
			} else {
				dest->append($(doWriteForward(text, bidiRun->start, bidiRun->limit, options)));
			}
		}
	} else {
		$var($bytes, dirProps, bidi->dirProps);
		for (run = runCount; --run >= 0;) {
			$var($BidiRun, bidiRun, bidi->getVisualRun(run));
			if ($nc(bidiRun)->isEvenRun()) {
				if ($nc(dirProps)->get(bidiRun->limit - 1) != $BidiBase::L) {
					dest->append(BidiWriter::LRM_CHAR);
				}
				dest->append($(doWriteReverse(text, bidiRun->start, bidiRun->limit, (int32_t)(options & (uint32_t)~$BidiBase::DO_MIRRORING))));
				if ($nc(dirProps)->get(bidiRun->start) != $BidiBase::L) {
					dest->append(BidiWriter::LRM_CHAR);
				}
			} else {
				if (((int32_t)(BidiWriter::MASK_R_AL & (uint32_t)$BidiBase::DirPropFlag($nc(dirProps)->get(bidiRun->start)))) == 0) {
					dest->append(BidiWriter::RLM_CHAR);
				}
				dest->append($(doWriteForward(text, bidiRun->start, bidiRun->limit, options)));
				if (((int32_t)(BidiWriter::MASK_R_AL & (uint32_t)$BidiBase::DirPropFlag($nc(dirProps)->get(bidiRun->limit - 1)))) == 0) {
					dest->append(BidiWriter::RLM_CHAR);
				}
			}
		}
	}
	return dest->toString();
}

BidiWriter::BidiWriter() {
}

$Class* BidiWriter::load$($String* name, bool initialize) {
	$loadClass(BidiWriter, name, initialize, &_BidiWriter_ClassInfo_, allocate$BidiWriter);
	return class$;
}

$Class* BidiWriter::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk