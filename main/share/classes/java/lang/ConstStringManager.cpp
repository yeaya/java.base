/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <java/lang/ConstStringManager.h>

#include <java/lang/ObjectManagerInternal.h>
#include <java/lang/SpinLock.h>
#include <string.h>
#include <jcpp.h>

namespace java {
	namespace lang {

// refer StringLatin1::hashCode
int32_t latin1HashCode(const char* value) {
	int32_t h = 0;
	{
		const int8_t* p = (const int8_t*)value;
		for (; *p != 0; ++p) {
			int8_t v = *p;
			{
				h = 31 * h + ((int32_t)(v & (uint32_t)255));
			}
		}
	}
	return h;
}

// refer StringUTF16::hashCode
int32_t UTF16HashCode(const char16_t* value) {
	int32_t h = 0;
	const char16_t* p = (const char16_t*)value;
	for (; *p != 0; ++p) {
		char16_t v = *p;
		{
			h = 31 * h + v;
		}
	}
	return h;
}

class ConstStringNode {
public:
	String* s;
	ConstStringNode* left;
	ConstStringNode* right;
};

class LiteralConstStringNode {
public:
	const void* literal;
	String* s;
	LiteralConstStringNode* left;
	LiteralConstStringNode* right;
};

static ConstStringNode** constStringRoots = nullptr;
static int32_t constStringRootsMask = 0;
static int32_t constStringRootsCount = 0;
static SpinLock constStringLook;
static LiteralConstStringNode** literalConstStringRoots = nullptr;
static int32_t literalConstStringRootsMask = 0;
static int32_t literalConstStringRootsCount = 0;
static SpinLock literalConstStringLook;

inline ConstStringNode* getOrCreateRoot(int32_t hashCode) {
	int32_t index = hashCode & constStringRootsMask;
	ConstStringNode* node = constStringRoots[index];
	if (node == nullptr) {
		LockGuard guard(constStringLook);
		node = constStringRoots[index];
		if (node == nullptr) {
			node = $allocRawStatic<ConstStringNode>();
			constStringRoots[index] = node;
		}
	}
	return node;
}

inline LiteralConstStringNode* getOrCreateLiteralRoot(const void* literal) {
	int32_t hashCode = (int32_t)(((intptr_t)literal >> 16) ^ (intptr_t)literal);
	int32_t index = hashCode & literalConstStringRootsMask;
	LiteralConstStringNode* node = literalConstStringRoots[index];
	if (node == nullptr) {
		LockGuard guard(literalConstStringLook);
		node = literalConstStringRoots[index];
		if (node == nullptr) {
			node = $allocRawStatic<LiteralConstStringNode>();
			literalConstStringRoots[index] = node;
		}
	}
	return node;
}

inline String* findLiteralConstString(const void* literal) {
	LiteralConstStringNode* node = getOrCreateLiteralRoot(literal);
	while (node != nullptr) {
		String* cs = node->s;
		if (cs != nullptr) {
			int64_t ret = (int8_t*)node->literal - (int8_t*)literal;
			if (ret > 0) {
				node = node->left;
			} else if (ret < 0) {
				node = node->right;
			} else {
				return cs;
			}
		} else {
			return nullptr;
		}
	}
	return nullptr;
}

inline String* findConstString(ConstStringNode* root, const char* s) {
	ConstStringNode* node = root;
	while (node != nullptr) {
		String* cs = node->s;
		if (cs != nullptr) {
			int32_t ret = cs->compareTo(s);
			if (ret > 0) {
				node = node->left;
			} else if (ret < 0) {
				node = node->right;
			} else {
				return cs;
			}
		} else {
			return nullptr;
		}
	}
	return nullptr;
}

inline String* findConstString(ConstStringNode* root, const char16_t* s) {
	ConstStringNode* node = root;
	while (node != nullptr) {
		String* cs = node->s;
		if (cs != nullptr) {
			int32_t ret = cs->compareTo(s);
			if (ret > 0) {
				node = node->left;
			} else if (ret < 0) {
				node = node->right;
			} else {
				return cs;
			}
		} else {
			return nullptr;
		}
	}
	return nullptr;
}

inline String* findConstString(ConstStringNode* root, String* s) {
	ConstStringNode* node = root;
	while (node != nullptr) {
		String* cs = node->s;
		if (cs != nullptr) {
			int32_t ret = cs->compareTo(s);
			if (ret > 0) {
				node = node->left;
			} else if (ret < 0) {
				node = node->right;
			} else {
				return cs;
			}
		} else {
			return nullptr;
		}
	}
	return nullptr;
}

inline void createLiteralConstString(const void* literal, String* s) {
	LiteralConstStringNode* root = getOrCreateLiteralRoot(literal);
	LockGuard guard(literalConstStringLook);
	LiteralConstStringNode* node = root;
	while (node != nullptr) {
		String* cs = node->s;
		if (cs != nullptr) {
			int64_t ret = (int8_t*)node->literal - (int8_t*)literal;
			if (ret > 0) {
				if (node->left == nullptr) {
					node->left = $allocRawStaticOrNull<LiteralConstStringNode>();
				}
				node = node->left;
			} else if (ret < 0) {
				if (node->right == nullptr) {
					node->right = $allocRawStaticOrNull<LiteralConstStringNode>();
				}
				node = node->right;
			} else {
				return;
			}
		} else {
			node->literal = literal;
			node->s = s;
			return;
		}
	}
}

inline String* findOrCreateConstString(ConstStringNode* root, const char* s) {
	LockGuard guard(constStringLook);
	ConstStringNode* node = root;
	while (node != nullptr) {
		String* cs = node->s;
		if (cs != nullptr) {
			int32_t ret = cs->compareTo(s);
			if (ret > 0) {
				if (node->left == nullptr) {
					node->left = $allocRawStatic<ConstStringNode>();
				}
				node = node->left;
			} else if (ret < 0) {
				if (node->right == nullptr) {
					node->right = $allocRawStatic<ConstStringNode>();
				}
				node = node->right;
			} else {
				return cs;
			}
		} else {
			cs = ObjectManagerInternal::allocConstString((int8_t*)s, strlen(s), String::LATIN1);
			node->s = cs;
			return cs;
		}
	}
	$shouldNotReachHere();
}

inline String* findOrCreateConstString(ConstStringNode* root, const char16_t* s) {
	LockGuard guard(constStringLook);
	ConstStringNode* node = root;
	while (node != nullptr) {
		String* cs = node->s;
		if (node->s != nullptr) {
			int32_t ret = cs->compareTo(s);
			if (ret > 0) {
				if (node->left == nullptr) {
					node->left = $allocRawStatic<ConstStringNode>();
				}
				node = node->left;
			} else if (ret < 0) {
				if (node->right == nullptr) {
					node->right = $allocRawStatic<ConstStringNode>();
				}
				node = node->right;
			} else {
				return cs;
			}
		} else {
			$var(String, s2, String::valueOf(s));
			cs = ObjectManagerInternal::allocConstString(s2->value$->begin(), s2->value$->length, s2->coder$);
			node->s = cs;
			return cs;
		}
	}
	$shouldNotReachHere();
}

inline String* findOrCreateConstString(ConstStringNode* root, String* s) {
	LockGuard guard(constStringLook);
	ConstStringNode* node = root;
	while (node != nullptr) {
		String* cs = node->s;
		if (cs != nullptr) {
			int32_t ret = cs->compareTo(s);
			if (ret > 0) {
				if (node->left == nullptr) {
					node->left = $allocRawStatic<ConstStringNode>();
				}
				node = node->left;
			} else if (ret < 0) {
				if (node->right == nullptr) {
					node->right = $allocRawStatic<ConstStringNode>();
				}
				node = node->right;
			} else {
				return cs;
			}
		} else {
			cs = ObjectManagerInternal::allocConstString(s->value$->begin(), s->value$->length, s->coder$);
			node->s = cs;
			return cs;
		}
	}
	$shouldNotReachHere();
}

void ConstStringManager::init() {
	constStringRootsCount = 2024;
	constStringRootsMask = constStringRootsCount - 1;
	constStringRoots = $allocRawStatic<ConstStringNode*>(constStringRootsCount);
	literalConstStringRootsCount = 2024;
	literalConstStringRootsMask = literalConstStringRootsCount - 1;
	literalConstStringRoots = $allocRawStatic<LiteralConstStringNode*>(literalConstStringRootsCount);
}

String* ConstStringManager::intern(String* s) {
	if (s != nullptr) {
		int32_t hashCode = s->hashCode();
		ConstStringNode* root = getOrCreateRoot(hashCode);
		String* constString = findConstString(root, s);
		if (constString != nullptr) {
			return constString;
		} else {
			constString = findOrCreateConstString(root, s);
			return constString;
		}
	}
	return s;
}

String* ConstStringManager::literalOf(const char* literal) {
	String* constString = findLiteralConstString(literal);
	if (constString != nullptr) {
		return constString;
	}
	constString = constValueOf(literal);
	createLiteralConstString(literal, constString);
	return constString;
}

String* ConstStringManager::literalOf(const char16_t* literal) {
	String* constString = findLiteralConstString(literal);
	if (constString != nullptr) {
		return constString;
	}
	constString = constValueOf(literal);
	createLiteralConstString(literal, constString);
	return constString;
}

String* ConstStringManager::constValueOf(const char* s) {
	if (s == nullptr) {
		s = "null";
	}
	int32_t hashCode = latin1HashCode(s);
	ConstStringNode* root = getOrCreateRoot(hashCode);
	String* constString = findConstString(root, s);
	if (constString != nullptr) {
		return constString;
	} else {
		constString = findOrCreateConstString(root, s);
		return constString;
	}
}

String* ConstStringManager::constValueOf(const char16_t* s) {
	int32_t hashCode = UTF16HashCode(s);
	ConstStringNode* root = getOrCreateRoot(hashCode);
	String* constString = findConstString(root, s);
	if (constString != nullptr) {
		return constString;
	} else {
		constString = findOrCreateConstString(root, s);
		return constString;
	}
}

String* ConstStringManager::constValueOf(const ::std::initializer_list<int32_t>& codePoints) {
	$var(String, s, String::valueOf(codePoints));
	int32_t hashCode = s->hashCode();
	ConstStringNode* root = getOrCreateRoot(hashCode);
	String* constString = findConstString(root, s);
	if (constString != nullptr) {
		return constString;
	} else {
		constString = findOrCreateConstString(root, s);
		return constString;
	}
}

	} // lang
} // java