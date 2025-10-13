#include <java/text/RuleBasedCollator.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/CharacterIterator.h>
#include <java/text/CollationElementIterator.h>
#include <java/text/CollationKey.h>
#include <java/text/Collator.h>
#include <java/text/Normalizer$Form.h>
#include <java/text/Normalizer.h>
#include <java/text/RBCollationTables.h>
#include <java/text/RuleBasedCollationKey.h>
#include <jcpp.h>

#undef CANONICAL_DECOMPOSITION
#undef CHARINDEX
#undef COLLATIONKEYOFFSET
#undef CONTRACTCHARINDEX
#undef EQUAL
#undef EXPANDCHARINDEX
#undef FULL_DECOMPOSITION
#undef GREATER
#undef IDENTICAL
#undef LESS
#undef NFD
#undef NFKD
#undef NULLORDER
#undef SECONDARY
#undef TERTIARY
#undef UNMAPPED

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;
using $CharacterIterator = ::java::text::CharacterIterator;
using $CollationElementIterator = ::java::text::CollationElementIterator;
using $CollationKey = ::java::text::CollationKey;
using $Collator = ::java::text::Collator;
using $Normalizer = ::java::text::Normalizer;
using $Normalizer$Form = ::java::text::Normalizer$Form;
using $RBCollationTables = ::java::text::RBCollationTables;
using $RuleBasedCollationKey = ::java::text::RuleBasedCollationKey;

namespace java {
	namespace text {

$FieldInfo _RuleBasedCollator_FieldInfo_[] = {
	{"CHARINDEX", "I", nullptr, $STATIC | $FINAL, $constField(RuleBasedCollator, CHARINDEX)},
	{"EXPANDCHARINDEX", "I", nullptr, $STATIC | $FINAL, $constField(RuleBasedCollator, EXPANDCHARINDEX)},
	{"CONTRACTCHARINDEX", "I", nullptr, $STATIC | $FINAL, $constField(RuleBasedCollator, CONTRACTCHARINDEX)},
	{"UNMAPPED", "I", nullptr, $STATIC | $FINAL, $constField(RuleBasedCollator, UNMAPPED)},
	{"COLLATIONKEYOFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RuleBasedCollator, COLLATIONKEYOFFSET)},
	{"tables", "Ljava/text/RBCollationTables;", nullptr, $PRIVATE, $field(RuleBasedCollator, tables)},
	{"primResult", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(RuleBasedCollator, primResult)},
	{"secResult", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(RuleBasedCollator, secResult)},
	{"terResult", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(RuleBasedCollator, terResult)},
	{"sourceCursor", "Ljava/text/CollationElementIterator;", nullptr, $PRIVATE, $field(RuleBasedCollator, sourceCursor)},
	{"targetCursor", "Ljava/text/CollationElementIterator;", nullptr, $PRIVATE, $field(RuleBasedCollator, targetCursor)},
	{}
};

$MethodInfo _RuleBasedCollator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RuleBasedCollator::*)($String*)>(&RuleBasedCollator::init$)), "java.text.ParseException"},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(RuleBasedCollator::*)($String*,int32_t)>(&RuleBasedCollator::init$)), "java.text.ParseException"},
	{"<init>", "(Ljava/text/RuleBasedCollator;)V", nullptr, $PRIVATE, $method(static_cast<void(RuleBasedCollator::*)(RuleBasedCollator*)>(&RuleBasedCollator::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCollationElementIterator", "(Ljava/lang/String;)Ljava/text/CollationElementIterator;", nullptr, $PUBLIC},
	{"getCollationElementIterator", "(Ljava/text/CharacterIterator;)Ljava/text/CollationElementIterator;", nullptr, $PUBLIC},
	{"getCollationKey", "(Ljava/lang/String;)Ljava/text/CollationKey;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getRules", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTables", "()Ljava/text/RBCollationTables;", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RuleBasedCollator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.RuleBasedCollator",
	"java.text.Collator",
	nullptr,
	_RuleBasedCollator_FieldInfo_,
	_RuleBasedCollator_MethodInfo_
};

$Object* allocate$RuleBasedCollator($Class* clazz) {
	return $of($alloc(RuleBasedCollator));
}

void RuleBasedCollator::init$($String* rules) {
	RuleBasedCollator::init$(rules, $Collator::CANONICAL_DECOMPOSITION);
}

void RuleBasedCollator::init$($String* rules, int32_t decomp) {
	$Collator::init$();
	$set(this, tables, nullptr);
	$set(this, primResult, nullptr);
	$set(this, secResult, nullptr);
	$set(this, terResult, nullptr);
	$set(this, sourceCursor, nullptr);
	$set(this, targetCursor, nullptr);
	setStrength($Collator::TERTIARY);
	setDecomposition(decomp);
	$set(this, tables, $new($RBCollationTables, rules, decomp));
}

void RuleBasedCollator::init$(RuleBasedCollator* that) {
	$Collator::init$();
	$set(this, tables, nullptr);
	$set(this, primResult, nullptr);
	$set(this, secResult, nullptr);
	$set(this, terResult, nullptr);
	$set(this, sourceCursor, nullptr);
	$set(this, targetCursor, nullptr);
	setStrength($nc(that)->getStrength());
	setDecomposition($nc(that)->getDecomposition());
	$set(this, tables, $nc(that)->tables);
}

$String* RuleBasedCollator::getRules() {
	return $nc(this->tables)->getRules();
}

$CollationElementIterator* RuleBasedCollator::getCollationElementIterator($String* source) {
	return $new($CollationElementIterator, source, this);
}

$CollationElementIterator* RuleBasedCollator::getCollationElementIterator($CharacterIterator* source) {
	return $new($CollationElementIterator, source, this);
}

int32_t RuleBasedCollator::compare($String* source, $String* target) {
	$synchronized(this) {
		if (source == nullptr || target == nullptr) {
			$throwNew($NullPointerException);
		}
		int32_t result = $Collator::EQUAL;
		if (this->sourceCursor == nullptr) {
			$set(this, sourceCursor, getCollationElementIterator(source));
		} else {
			$nc(this->sourceCursor)->setText(source);
		}
		if (this->targetCursor == nullptr) {
			$set(this, targetCursor, getCollationElementIterator(target));
		} else {
			$nc(this->targetCursor)->setText(target);
		}
		int32_t sOrder = 0;
		int32_t tOrder = 0;
		bool initialCheckSecTer = getStrength() >= $Collator::SECONDARY;
		bool checkSecTer = initialCheckSecTer;
		bool checkTertiary = getStrength() >= $Collator::TERTIARY;
		bool gets = true;
		bool gett = true;
		while (true) {
			if (gets) {
				sOrder = $nc(this->sourceCursor)->next();
			} else {
				gets = true;
			}
			if (gett) {
				tOrder = $nc(this->targetCursor)->next();
			} else {
				gett = true;
			}
			if ((sOrder == $CollationElementIterator::NULLORDER) || (tOrder == $CollationElementIterator::NULLORDER)) {
				break;
			}
			int32_t pSOrder = $CollationElementIterator::primaryOrder(sOrder);
			int32_t pTOrder = $CollationElementIterator::primaryOrder(tOrder);
			if (sOrder == tOrder) {
				if ($nc(this->tables)->isFrenchSec() && pSOrder != 0) {
					if (!checkSecTer) {
						checkSecTer = initialCheckSecTer;
						checkTertiary = false;
					}
				}
				continue;
			}
			if (pSOrder != pTOrder) {
				if (sOrder == 0) {
					gett = false;
					continue;
				}
				if (tOrder == 0) {
					gets = false;
					continue;
				}
				if (pSOrder == 0) {
					if (checkSecTer) {
						result = $Collator::GREATER;
						checkSecTer = false;
					}
					gett = false;
				} else if (pTOrder == 0) {
					if (checkSecTer) {
						result = $Collator::LESS;
						checkSecTer = false;
					}
					gets = false;
				} else if (pSOrder < pTOrder) {
					return $Collator::LESS;
				} else {
					return $Collator::GREATER;
				}
			} else if (checkSecTer) {
				int16_t secSOrder = $CollationElementIterator::secondaryOrder(sOrder);
				int16_t secTOrder = $CollationElementIterator::secondaryOrder(tOrder);
				if (secSOrder != secTOrder) {
					result = (secSOrder < secTOrder) ? $Collator::LESS : $Collator::GREATER;
					checkSecTer = false;
				} else if (checkTertiary) {
					int16_t terSOrder = $CollationElementIterator::tertiaryOrder(sOrder);
					int16_t terTOrder = $CollationElementIterator::tertiaryOrder(tOrder);
					if (terSOrder != terTOrder) {
						result = (terSOrder < terTOrder) ? $Collator::LESS : $Collator::GREATER;
						checkTertiary = false;
					}
				}
			}
		}
		if (sOrder != $CollationElementIterator::NULLORDER) {
			do {
				if ($CollationElementIterator::primaryOrder(sOrder) != 0) {
					return $Collator::GREATER;
				} else if ($CollationElementIterator::secondaryOrder(sOrder) != 0) {
					if (checkSecTer) {
						result = $Collator::GREATER;
						checkSecTer = false;
					}
				}
			} while ((sOrder = $nc(this->sourceCursor)->next()) != $CollationElementIterator::NULLORDER);
		} else if (tOrder != $CollationElementIterator::NULLORDER) {
			do {
				if ($CollationElementIterator::primaryOrder(tOrder) != 0) {
					return $Collator::LESS;
				} else if ($CollationElementIterator::secondaryOrder(tOrder) != 0) {
					if (checkSecTer) {
						result = $Collator::LESS;
						checkSecTer = false;
					}
				}
			} while ((tOrder = $nc(this->targetCursor)->next()) != $CollationElementIterator::NULLORDER);
		}
		if (result == 0 && getStrength() == $Collator::IDENTICAL) {
			int32_t mode = getDecomposition();
			$Normalizer$Form* form = nullptr;
			if (mode == $Collator::CANONICAL_DECOMPOSITION) {
				$init($Normalizer$Form);
				form = $Normalizer$Form::NFD;
			} else if (mode == $Collator::FULL_DECOMPOSITION) {
				$init($Normalizer$Form);
				form = $Normalizer$Form::NFKD;
			} else {
				return $nc(source)->compareTo(target);
			}
			$var($String, sourceDecomposition, $Normalizer::normalize(source, form));
			$var($String, targetDecomposition, $Normalizer::normalize(target, form));
			return $nc(sourceDecomposition)->compareTo(targetDecomposition);
		}
		return result;
	}
}

$CollationKey* RuleBasedCollator::getCollationKey($String* source) {
	$synchronized(this) {
		if (source == nullptr) {
			return nullptr;
		}
		if (this->primResult == nullptr) {
			$set(this, primResult, $new($StringBuffer));
			$set(this, secResult, $new($StringBuffer));
			$set(this, terResult, $new($StringBuffer));
		} else {
			$nc(this->primResult)->setLength(0);
			$nc(this->secResult)->setLength(0);
			$nc(this->terResult)->setLength(0);
		}
		int32_t order = 0;
		bool compareSec = (getStrength() >= $Collator::SECONDARY);
		bool compareTer = (getStrength() >= $Collator::TERTIARY);
		int32_t secOrder = $CollationElementIterator::NULLORDER;
		int32_t terOrder = $CollationElementIterator::NULLORDER;
		int32_t preSecIgnore = 0;
		if (this->sourceCursor == nullptr) {
			$set(this, sourceCursor, getCollationElementIterator(source));
		} else {
			$nc(this->sourceCursor)->setText(source);
		}
		while ((order = $nc(this->sourceCursor)->next()) != $CollationElementIterator::NULLORDER) {
			secOrder = $CollationElementIterator::secondaryOrder(order);
			terOrder = $CollationElementIterator::tertiaryOrder(order);
			if (!$CollationElementIterator::isIgnorable(order)) {
				$nc(this->primResult)->append((char16_t)($CollationElementIterator::primaryOrder(order) + RuleBasedCollator::COLLATIONKEYOFFSET));
				if (compareSec) {
					bool var$0 = $nc(this->tables)->isFrenchSec();
					if (var$0 && preSecIgnore < $nc(this->secResult)->length()) {
						$RBCollationTables::reverse(this->secResult, preSecIgnore, $nc(this->secResult)->length());
					}
					$nc(this->secResult)->append((char16_t)(secOrder + RuleBasedCollator::COLLATIONKEYOFFSET));
					preSecIgnore = $nc(this->secResult)->length();
				}
				if (compareTer) {
					$nc(this->terResult)->append((char16_t)(terOrder + RuleBasedCollator::COLLATIONKEYOFFSET));
				}
			} else {
				if (compareSec && secOrder != 0) {
					$nc(this->secResult)->append((char16_t)(secOrder + $nc(this->tables)->getMaxSecOrder() + RuleBasedCollator::COLLATIONKEYOFFSET));
				}
				if (compareTer && terOrder != 0) {
					$nc(this->terResult)->append((char16_t)(terOrder + $nc(this->tables)->getMaxTerOrder() + RuleBasedCollator::COLLATIONKEYOFFSET));
				}
			}
		}
		if ($nc(this->tables)->isFrenchSec()) {
			if (preSecIgnore < $nc(this->secResult)->length()) {
				$RBCollationTables::reverse(this->secResult, preSecIgnore, $nc(this->secResult)->length());
			}
			$RBCollationTables::reverse(this->secResult, 0, $nc(this->secResult)->length());
		}
		$nc(this->primResult)->append((char16_t)0);
		$nc(this->secResult)->append((char16_t)0);
		$nc(this->secResult)->append($($nc(this->terResult)->toString()));
		$nc(this->primResult)->append($($nc(this->secResult)->toString()));
		if (getStrength() == $Collator::IDENTICAL) {
			$nc(this->primResult)->append((char16_t)0);
			int32_t mode = getDecomposition();
			if (mode == $Collator::CANONICAL_DECOMPOSITION) {
				$init($Normalizer$Form);
				$nc(this->primResult)->append($($Normalizer::normalize(source, $Normalizer$Form::NFD)));
			} else if (mode == $Collator::FULL_DECOMPOSITION) {
				$init($Normalizer$Form);
				$nc(this->primResult)->append($($Normalizer::normalize(source, $Normalizer$Form::NFKD)));
			} else {
				$nc(this->primResult)->append(source);
			}
		}
		return $new($RuleBasedCollationKey, source, $($nc(this->primResult)->toString()));
	}
}

$Object* RuleBasedCollator::clone() {
	if ($of(this)->getClass() == RuleBasedCollator::class$) {
		return $of($new(RuleBasedCollator, this));
	} else {
		$var(RuleBasedCollator, result, $cast(RuleBasedCollator, $Collator::clone()));
		$set($nc(result), primResult, nullptr);
		$set(result, secResult, nullptr);
		$set(result, terResult, nullptr);
		$set(result, sourceCursor, nullptr);
		$set(result, targetCursor, nullptr);
		return $of(result);
	}
}

bool RuleBasedCollator::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	if (!$Collator::equals(obj)) {
		return false;
	}
	$var(RuleBasedCollator, other, $cast(RuleBasedCollator, obj));
	return ($nc($(getRules()))->equals($($nc(other)->getRules())));
}

int32_t RuleBasedCollator::hashCode() {
	return $nc($(getRules()))->hashCode();
}

$RBCollationTables* RuleBasedCollator::getTables() {
	return this->tables;
}

RuleBasedCollator::RuleBasedCollator() {
}

$Class* RuleBasedCollator::load$($String* name, bool initialize) {
	$loadClass(RuleBasedCollator, name, initialize, &_RuleBasedCollator_ClassInfo_, allocate$RuleBasedCollator);
	return class$;
}

$Class* RuleBasedCollator::class$ = nullptr;

	} // text
} // java