#include <java/text/MergeCollation.h>

#include <java/lang/CharSequence.h>
#include <java/lang/StringBuffer.h>
#include <java/text/Collator.h>
#include <java/text/ParseException.h>
#include <java/text/PatternEntry$Parser.h>
#include <java/text/PatternEntry.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

#undef BITARRAYMASK
#undef BYTEMASK
#undef BYTEPOWER
#undef IDENTICAL
#undef RESET

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Collator = ::java::text::Collator;
using $ParseException = ::java::text::ParseException;
using $PatternEntry = ::java::text::PatternEntry;
using $PatternEntry$Parser = ::java::text::PatternEntry$Parser;
using $ArrayList = ::java::util::ArrayList;

namespace java {
	namespace text {

$FieldInfo _MergeCollation_FieldInfo_[] = {
	{"patterns", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/text/PatternEntry;>;", 0, $field(MergeCollation, patterns)},
	{"saveEntry", "Ljava/text/PatternEntry;", nullptr, $PRIVATE | $TRANSIENT, $field(MergeCollation, saveEntry)},
	{"lastEntry", "Ljava/text/PatternEntry;", nullptr, $PRIVATE | $TRANSIENT, $field(MergeCollation, lastEntry)},
	{"excess", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE | $TRANSIENT, $field(MergeCollation, excess)},
	{"statusArray", "[B", nullptr, $PRIVATE | $TRANSIENT, $field(MergeCollation, statusArray)},
	{"BITARRAYMASK", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MergeCollation, BITARRAYMASK)},
	{"BYTEPOWER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MergeCollation, BYTEPOWER)},
	{"BYTEMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MergeCollation, BYTEMASK)},
	{}
};

$MethodInfo _MergeCollation_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MergeCollation, init$, void, $String*), "java.text.ParseException"},
	{"addPattern", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MergeCollation, addPattern, void, $String*), "java.text.ParseException"},
	{"emitPattern", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(MergeCollation, emitPattern, $String*)},
	{"emitPattern", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $method(MergeCollation, emitPattern, $String*, bool)},
	{"findLastEntry", "(Ljava/text/PatternEntry;Ljava/lang/StringBuffer;)I", nullptr, $PRIVATE | $FINAL, $method(MergeCollation, findLastEntry, int32_t, $PatternEntry*, $StringBuffer*), "java.text.ParseException"},
	{"findLastWithNoExtension", "(I)Ljava/text/PatternEntry;", nullptr, $PRIVATE | $FINAL, $method(MergeCollation, findLastWithNoExtension, $PatternEntry*, int32_t)},
	{"fixEntry", "(Ljava/text/PatternEntry;)V", nullptr, $PRIVATE | $FINAL, $method(MergeCollation, fixEntry, void, $PatternEntry*), "java.text.ParseException"},
	{"getCount", "()I", nullptr, $PUBLIC, $method(MergeCollation, getCount, int32_t)},
	{"getItemAt", "(I)Ljava/text/PatternEntry;", nullptr, $PUBLIC, $method(MergeCollation, getItemAt, $PatternEntry*, int32_t)},
	{"getPattern", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(MergeCollation, getPattern, $String*)},
	{"getPattern", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $method(MergeCollation, getPattern, $String*, bool)},
	{"setPattern", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MergeCollation, setPattern, void, $String*), "java.text.ParseException"},
	{}
};

$ClassInfo _MergeCollation_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.text.MergeCollation",
	"java.lang.Object",
	nullptr,
	_MergeCollation_FieldInfo_,
	_MergeCollation_MethodInfo_
};

$Object* allocate$MergeCollation($Class* clazz) {
	return $of($alloc(MergeCollation));
}

void MergeCollation::init$($String* pattern) {
	$set(this, patterns, $new($ArrayList));
	$set(this, saveEntry, nullptr);
	$set(this, lastEntry, nullptr);
	$set(this, excess, $new($StringBuffer));
	$set(this, statusArray, $new($bytes, 8192));
	for (int32_t i = 0; i < $nc(this->statusArray)->length; ++i) {
		$nc(this->statusArray)->set(i, (int8_t)0);
	}
	setPattern(pattern);
}

$String* MergeCollation::getPattern() {
	return getPattern(true);
}

$String* MergeCollation::getPattern(bool withWhiteSpace) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, result, $new($StringBuffer));
	$var($PatternEntry, tmp, nullptr);
	$var($ArrayList, extList, nullptr);
	int32_t i = 0;
	for (i = 0; i < $nc(this->patterns)->size(); ++i) {
		$var($PatternEntry, entry, $cast($PatternEntry, $nc(this->patterns)->get(i)));
		if (!$nc($nc(entry)->extension)->isEmpty()) {
			if (extList == nullptr) {
				$assign(extList, $new($ArrayList));
			}
			$nc(extList)->add(entry);
		} else {
			if (extList != nullptr) {
				$var($PatternEntry, last, findLastWithNoExtension(i - 1));
				for (int32_t j = extList->size() - 1; j >= 0; --j) {
					$assign(tmp, $cast($PatternEntry, extList->get(j)));
					$nc(tmp)->addToBuffer(result, false, withWhiteSpace, last);
				}
				$assign(extList, nullptr);
			}
			entry->addToBuffer(result, false, withWhiteSpace, nullptr);
		}
	}
	if (extList != nullptr) {
		$var($PatternEntry, last, findLastWithNoExtension(i - 1));
		for (int32_t j = extList->size() - 1; j >= 0; --j) {
			$assign(tmp, $cast($PatternEntry, extList->get(j)));
			$nc(tmp)->addToBuffer(result, false, withWhiteSpace, last);
		}
		$assign(extList, nullptr);
	}
	return result->toString();
}

$PatternEntry* MergeCollation::findLastWithNoExtension(int32_t i) {
	$useLocalCurrentObjectStackCache();
	for (--i; i >= 0; --i) {
		$var($PatternEntry, entry, $cast($PatternEntry, $nc(this->patterns)->get(i)));
		if ($nc($nc(entry)->extension)->isEmpty()) {
			return entry;
		}
	}
	return nullptr;
}

$String* MergeCollation::emitPattern() {
	return emitPattern(true);
}

$String* MergeCollation::emitPattern(bool withWhiteSpace) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, result, $new($StringBuffer));
	for (int32_t i = 0; i < $nc(this->patterns)->size(); ++i) {
		$var($PatternEntry, entry, $cast($PatternEntry, $nc(this->patterns)->get(i)));
		if (entry != nullptr) {
			entry->addToBuffer(result, true, withWhiteSpace, nullptr);
		}
	}
	return result->toString();
}

void MergeCollation::setPattern($String* pattern) {
	$nc(this->patterns)->clear();
	addPattern(pattern);
}

void MergeCollation::addPattern($String* pattern) {
	$useLocalCurrentObjectStackCache();
	if (pattern == nullptr) {
		return;
	}
	$var($PatternEntry$Parser, parser, $new($PatternEntry$Parser, pattern));
	$var($PatternEntry, entry, parser->next());
	while (entry != nullptr) {
		fixEntry(entry);
		$assign(entry, parser->next());
	}
}

int32_t MergeCollation::getCount() {
	return $nc(this->patterns)->size();
}

$PatternEntry* MergeCollation::getItemAt(int32_t index) {
	return $cast($PatternEntry, $nc(this->patterns)->get(index));
}

void MergeCollation::fixEntry($PatternEntry* newEntry) {
	bool var$0 = this->lastEntry != nullptr && $nc($nc(newEntry)->chars)->equals($nc(this->lastEntry)->chars);
	if (var$0 && $nc(newEntry->extension)->equals($nc(this->lastEntry)->extension)) {
		if (newEntry->strength != $Collator::IDENTICAL && newEntry->strength != $PatternEntry::RESET) {
			$throwNew($ParseException, $$str({"The entries "_s, this->lastEntry, " and "_s, newEntry, " are adjacent in the rules, but have conflicting strengths: A character can\'t be unequal to itself."_s}), -1);
		} else {
			return;
		}
	}
	bool changeLastEntry = true;
	if ($nc(newEntry)->strength != $PatternEntry::RESET) {
		int32_t oldIndex = -1;
		if ($nc(newEntry->chars)->length() == 1) {
			char16_t c = $nc(newEntry->chars)->charAt(0);
			int32_t statusIndex = $sr((int32_t)c, MergeCollation::BYTEPOWER);
			int8_t bitClump = $nc(this->statusArray)->get(statusIndex);
			int8_t setBit = (int8_t)($sl((int32_t)MergeCollation::BITARRAYMASK, (int32_t)(c & (uint32_t)MergeCollation::BYTEMASK)));
			if (bitClump != 0 && ((int32_t)(bitClump & (uint32_t)(int32_t)setBit)) != 0) {
				oldIndex = $nc(this->patterns)->lastIndexOf(newEntry);
			} else {
				$nc(this->statusArray)->set(statusIndex, (int8_t)(bitClump | setBit));
			}
		} else {
			oldIndex = $nc(this->patterns)->lastIndexOf(newEntry);
		}
		if (oldIndex != -1) {
			$nc(this->patterns)->remove(oldIndex);
		}
		$nc(this->excess)->setLength(0);
		int32_t lastIndex = findLastEntry(this->lastEntry, this->excess);
		if ($nc(this->excess)->length() != 0) {
			$set(newEntry, extension, $str({this->excess, newEntry->extension}));
			if (lastIndex != $nc(this->patterns)->size()) {
				$set(this, lastEntry, this->saveEntry);
				changeLastEntry = false;
			}
		}
		if (lastIndex == $nc(this->patterns)->size()) {
			$nc(this->patterns)->add(newEntry);
			$set(this, saveEntry, newEntry);
		} else {
			$nc(this->patterns)->add(lastIndex, newEntry);
		}
	}
	if (changeLastEntry) {
		$set(this, lastEntry, newEntry);
	}
}

int32_t MergeCollation::findLastEntry($PatternEntry* entry, $StringBuffer* excessChars) {
	$useLocalCurrentObjectStackCache();
	if (entry == nullptr) {
		return 0;
	}
	if ($nc(entry)->strength != $PatternEntry::RESET) {
		int32_t oldIndex = -1;
		if ($nc(entry->chars)->length() == 1) {
			int32_t index = $sr((int32_t)$nc(entry->chars)->charAt(0), MergeCollation::BYTEPOWER);
			if (((int32_t)($nc(this->statusArray)->get(index) & (uint32_t)($sl((int32_t)MergeCollation::BITARRAYMASK, (int32_t)($nc(entry->chars)->charAt(0) & (uint32_t)MergeCollation::BYTEMASK))))) != 0) {
				oldIndex = $nc(this->patterns)->lastIndexOf(entry);
			}
		} else {
			oldIndex = $nc(this->patterns)->lastIndexOf(entry);
		}
		if (oldIndex == -1) {
			$throwNew($ParseException, $$str({"couldn\'t find last entry: "_s, entry}), oldIndex);
		}
		return oldIndex + 1;
	} else {
		int32_t i = 0;
		for (i = $nc(this->patterns)->size() - 1; i >= 0; --i) {
			$var($PatternEntry, e, $cast($PatternEntry, $nc(this->patterns)->get(i)));
			if ($nc($nc(e)->chars)->regionMatches(0, entry->chars, 0, $nc(e->chars)->length())) {
				$var($CharSequence, var$0, static_cast<$CharSequence*>(entry->chars));
				int32_t var$1 = $nc(e->chars)->length();
				$nc(excessChars)->append(var$0, var$1, $nc(entry->chars)->length());
				break;
			}
		}
		if (i == -1) {
			$throwNew($ParseException, $$str({"couldn\'t find: "_s, entry}), i);
		}
		return i + 1;
	}
}

MergeCollation::MergeCollation() {
}

$Class* MergeCollation::load$($String* name, bool initialize) {
	$loadClass(MergeCollation, name, initialize, &_MergeCollation_ClassInfo_, allocate$MergeCollation);
	return class$;
}

$Class* MergeCollation::class$ = nullptr;

	} // text
} // java