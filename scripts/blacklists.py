import re

raw_unit_names = [
	r'Chief SOG',
	r'El Cid',
	r'Tilt',
	r'Wild Carrot'
	r'Razorback',
	r'Savage',
	r'\(Hobo\)',
	r'\(Wolfpack\)',
	r'\(Sundowners\)',
	r'\(Sundowners\)',
	r'\(VM',
	r'\(HMM',
]

raw_editor_subcategory_names = [
	r'195th',
	r'MACV-SOG',
	r'Det Bravo',
	r'\(MEDT\)',
]

unit_names = [ re.compile(exp) for exp in raw_unit_names ]
editor_subcategory_names = [ re.compile(exp) for exp in raw_editor_subcategory_names ]

def is_blacklisted(blacklist: list[re.Pattern[str]], text: str) -> bool:
	for item in blacklist:
		if item.search(text, re.IGNORECASE):
			return True
	return False