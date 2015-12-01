// Manatí Base Theme JS functions
(function($) {
	$(document).ready(function() {
		//Menu toggle funcionality
		$("#menu-toggle").click(function(){
			$(this).toggleClass("on");
			$(".nav-main ul:first-child").toggleClass("extended");
		});
		
		//Display subcategories form link categories
		$(".expanded").click(function(){
			console.log("hola");
			$(".expanded .menu").toggleClass("drop-down");
		});
	}); 	

})(jQuery);