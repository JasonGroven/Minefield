# BUG LOG
Placing mines out of boundaries appears to work just fine, implying
an error in the private function "inBounds(int, int)".

Instantiating a Field with negative dimensions causes a segmentation 
fault.
