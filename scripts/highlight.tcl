namespace eval hl {

variable lazy 0

# Autogenerated with DRAKON Editor 1.24

proc end_lazy { } {
    #item 26
    variable lazy
    #item 27
    set lazy 0
}

proc render_text { surface coords text font fill anchor } {
    #item 28
    variable lazy
    #item 29
    if {$lazy} {
        #item 16
        set fill "#ff0000"
    } else {
        
    }
    #item 15
    set main [ $surface create text \
    	$coords \
    	-text $text \
    	-font $font \
    	-fill $fill \
    	-anchor $anchor ]
    #item 33
    set center [ $surface create text \
    	$coords \
    	-text "+" \
    	-font $font \
    	-fill "#00ff00" \
    	-anchor $anchor ]
    #item 34
    return [ list $main $center ]
}

proc start_lazy { } {
    #item 21
    variable lazy
    #item 22
    set lazy 1
}

}
