from fpdf import FPDF
from PyPDF2 import PdfMerger
from fpdf import FPDF

class CustomPDF(FPDF):
    def header(self):
        self.set_font("Arial", "B", 24)
        self.cell(0, 10, "Weekly Timetable", 0, 1, "C")
        self.ln(10)

    def chapter_title(self, day):
        self.set_fill_color(192,192,192)
        self.set_font("Arial", "B", 15)
        self.cell(0, 10, day, 0, 1, "L", True)
        self.ln(10)

    def chapter_body(self, entries):
        self.set_font("Arial", "B", 12)
        for index, entry in enumerate(entries, start=1):
            
            time, work = entry.split(":",1)
            self.set_text_color(255, 0, 0)
            # self.set_fill_color(255, 0, 0)
            # self.set_draw_color(0, 0, 255)
            self.cell(10, 10, str(index), 0, 0, "L")
            self.set_text_color(0, 0, 255)
            self.cell(30, 10, time, 0, 0, "L")
            self.cell(0, 10, work, 0, 1, "L")
            self.ln(4)

    def footer(self):
        self.set_y(-15)
        self.set_font("Arial", "I", 8)
        self.cell(0, 10, f"Page {self.page_no()}", 0, 0, "C")


def generate_weekly_timetable(timetable):
    pdf = CustomPDF()
    pdf.set_auto_page_break(auto=False, margin=15)
    pdf.add_page()

    for day, entries in timetable.items():
        pdf.chapter_title(day)
        pdf.chapter_body(entries)
        pdf.add_page()

    pdf.output("weekly_timetable.pdf")
# from fpdf import FPDF
# from PyPDF2 import PdfMerger
# from fpdf import FPDF

# class CustomPDF(FPDF):
#     def header(self):
#         self.set_font("Arial", "B", 24)
#         self.cell(0, 10, "Weekly Timetable", 0, 1, "C")
#         self.ln(10)

#     def chapter_title(self, day):
#         # self.set_draw_color(192, 192, 192)
#         self.set_font("Arial", "B", 15)
#         self.cell(0, 10, day, 0, 1, "L", True)
#         self.ln(10)

#     def chapter_body(self, entries):
#         self.set_font("Arial", "B", 12)
#         for index, entry in enumerate(entries, start=1):
#             time, work = entry.split(":", 1)
            
#             # Add a border around the timetable entry
#             self.set_text_color(255, 255, 255)
#             self.cell(10, 10, str(index), 1, 0, "L", True)
#             self.set_draw_color(192, 192, 192)
#             self.cell(30, 10, time, 1, 0, "L", True)
#             self.multi_cell(0, 10, work, 1, "L", True)
#             self.ln(4)

#     def footer(self):
#         self.set_y(-15)
#         self.set_font("Arial", "I", 8)
#         self.cell(0, 10, f"Page {self.page_no()}", 0, 0, "C")


# def generate_weekly_timetable(timetable):
#     pdf = CustomPDF()
#     pdf.set_auto_page_break(auto=False, margin=15)
#     pdf.add_page()

#     for day, entries in timetable.items():
#         pdf.chapter_title(day)
#         pdf.chapter_body(entries)
#         pdf.add_page()

#     pdf.output("weekly_timetable.pdf")



# Timetable for all days of the week
# days_of_week = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]

timetable = {
    "Monday": [
        "                       6:00 AM - 7:00 AM: Wake up and Exercise (Reward: Healthy start to the day!)",
        "                       7:00 AM - 8:00 AM: Breakfast and Health (Reward: Enjoy a nutritious meal!)",
        "                       8:00 AM - 9:00 AM: subject1 (Reward: +10 knowledge points!)",
        "                     10:00 AM - 11:00 AM: subject2 (Reward: Code like a pro!)",
        "                      9:00 AM - 10:00 AM: subject3 (Reward: Understanding high voltage!)",
        "                     11:00 AM - 11:30 AM: Snack Break (Reward: Treat yourself with a healthy snack!)",
        "                     11:30 AM - 1:00 PM: Coding Practice (Reward: Sharpen your programming skills!)",
        "                       1:00 PM - 2:00 PM: Lunch Break (Reward: Savor a delicious meal!)",
        "                       2:00 PM - 3:30 PM: subject4 (Reward: Mastering mathematical concepts!)",
        "                       3:30 PM - 4:00 PM: Snack Break (Reward: Enjoy a quick and energizing snack!)",
        "                       4:00 PM - 5:00 PM: subject5 (Reward: Understanding the heart of computers!)",
        "                      5:00 PM - 5:30 PM: Leisure Time (Reward: Relax and recharge!)",
        "                      5:30 PM - 7:30 PM: WORKOUT TIME  (Reward: Improve your cricket skills!)",
        "                       7:30 PM - 8:00 PM: Dinner Break (Reward: Satisfy your hunger!)",
        "                       8:00 PM - 9:00 PM: subject6 (Reward: Master a new language!)",
        "                       9:00 PM - 10:00 PM: subject1 (Reward: Deepen your understanding!)",
        "                       10:00 PM - 10:30 PM: Self-Study or Revision (Reward: Consolidate your knowledge!)",
        "                     10:30 PM - 6:00 AM: Sleep (Reward: Rest and recharge for a new day!)"
    ],
    "Tuesday": [
        "                      6:00 AM - 7:00 AM: Wake up and Exercise (Reward: Energize your body!)",
        "                      7:00 AM - 8:00 AM: Breakfast and Health (Reward: Nourish your body and mind!)",
        "                      8:00 AM - 9:00 AM: subject2 (Reward: Level up your coding skills!)",
        "                      9:00 AM - 10:00 AM: subject3 (Reward: Discover the power of electricity!)",
        "                     10:00 AM - 11:00 AM: subject6 (Reward: Expand your language proficiency!)",
        "                     11:00 AM - 11:30 AM: Snack Break (Reward: Treat yourself with a healthy snack!)",
        "                     11:30 AM - 1:00 PM: Coding Practice (Reward: Enhance your coding expertise!)",
        "                      1:00 PM - 2:00 PM: Lunch Break (Reward: Enjoy a well-deserved break!)",
        "                      2:00 PM - 3:30 PM: subject4 (Reward: Conquer complex mathematical problems!)",
        "                      3:30 PM - 4:00 PM: Snack Break (Reward: Recharge with a quick snack!)",
        "                      4:00 PM - 5:00 PM: subject1 (Reward: Dive deeper into OS concepts!)",
        "                      5:00 PM - 5:30 PM: Leisure Time (Reward: Indulge in your favorite activity!)",
        "                      5:30 PM - 7:30 PM: WORKOUT TIME  (Reward: Enhance your cricketing skills!)",
        "                      7:30 PM - 8:00 PM: Dinner Break (Reward: Relish a tasty dinner!)",
        "                      8:00 PM - 9:00 PM: subject5 (Reward: Unleash the power of subject5s!)",
        "                      9:00 PM - 10:00 PM: subject6 (Reward: Master a new language!)",
        "                      10:00 PM - 10:30 PM: Self-Study or Revision (Reward: Strengthen your knowledge!)",
        "                     10:30 PM - 6:00 AM: Sleep (Reward: Rejuvenate for a productive day ahead!)"
    ],
    "Wednesday": [
        "                    6:00 AM - 7:00 AM: Wake up and Exercise (Reward: Start the day with a burst of energy!)",
        "                    7:00 AM - 8:00 AM: Breakfast and Health (Reward: Fuel your body with a nutritious meal!)",
        "                    8:00 AM - 9:00 AM: subject4 (Reward: Sharpen your mathematical acumen!)",
        "                    9:00 AM - 10:00 AM: subject1 (Reward: Expand your OS knowledge!)",
        "                    10:00 AM - 11:00 AM: subject5 (Reward: Dive into the world of processors!)",
        "                    11:00 AM - 11:30 AM: Snack Break (Reward: Recharge with a tasty snack!)",
        "                    11:30 AM - 1:00 PM: Coding Practice (Reward: Hone your coding prowess!)",
        "                    1:00 PM - 2:00 PM: Lunch Break (Reward: Relish a satisfying meal!)",
        "                    2:00 PM - 3:30 PM: subject2 (Reward: Unlock the potential of subject2!)",
        "                    3:30 PM - 4:00 PM: Snack Break (Reward: Treat yourself with a quick snack!)",
        "                    4:00 PM - 5:00 PM: subject6 (Reward: Master a new language!)",
        "                    5:00 PM - 5:30 PM: Leisure Time (Reward: Enjoy a well-deserved break!)",
        "                    5:30 PM - 7:30 PM: WORKOUT TIME  (Reward: Improve your cricketing skills!)",
        "                    7:30 PM - 8:00 PM: Dinner Break (Reward: Savor a delicious dinner!)",
        "                    8:00 PM - 9:00 PM: subject3 (Reward: Gain knowledge about high voltage systems!)",
        "                    9:00 PM - 10:00 PM: subject1 (Reward: Deepen your understanding!)",
        "                    10:00 PM - 10:30 PM: Self-Study or Revision (Reward: Consolidate your knowledge!)",
        "                    10:30 PM - 6:00 AM: Sleep (Reward: Rest and recharge for a new day!)"
    ],
    "Thursday": [
        "                     6:00 AM - 7:00 AM: Wake up and Exercise (Reward: Energize your body and mind!)",
        "                     7:00 AM - 8:00 AM: Breakfast and Health (Reward: Nourish your body for the day!)",
        "                     8:00 AM - 9:00 AM: subject1 (Reward: Expand your OS knowledge!)",
        "                     9:00 AM - 10:00 AM: subject3 (Reward: Explore the world of high voltage systems!)",
        "                     10:00 AM - 11:00 AM: subject6 (Reward: Enhance your language skills!)",
        "                     11:00 AM - 11:30 AM: Snack Break (Reward: Treat yourself with a healthy snack!)",
        "                     11:30 AM - 1:00 PM: Coding Practice (Reward: Elevate your coding expertise!)",
        "                     1:00 PM - 2:00 PM: Lunch Break (Reward: Enjoy a well-deserved break!)",
        "                     2:00 PM - 3:30 PM: subject4 (Reward: Master mathematical concepts!)",
        "                     3:30 PM - 4:00 PM: Snack Break (Reward: Recharge with a quick snack!)",
        "                     4:00 PM - 5:00 PM: subject5 (Reward: Unleash the power of subject5s!)",
        "                     5:00 PM - 5:30 PM: Leisure Time (Reward: Relax and indulge in your favorite activity!)",
        "                     5:30 PM - 7:30 PM: WORKOUT TIME  (Reward: Enhance your cricketing skills!)",
        "                     7:30 PM - 8:00 PM: Dinner Break (Reward: Savor a delicious dinner!)",
        "                     8:00 PM - 9:00 PM: subject2 (Reward: Excel in the world of subject2!)",
        "                     9:00 PM - 10:00 PM: subject1 (Reward: Deepen your understanding!)",
        "                     10:00 PM - 10:30 PM: Self-Study or Revision (Reward: Strengthen your knowledge!)",
        "                     10:30 PM - 6:00 AM: Sleep (Reward: Rest and recharge for a new day!)"
    ],
    "Friday": [
        "                       6:00 AM - 7:00 AM: Wake up and Exercise (Reward: Start the day with a healthy routine!)",
        "                       7:00 AM - 8:00 AM: Breakfast and Health (Reward: Nourish your body and mind!)",
        "                       8:00 AM - 9:00 AM: subject2 (Reward: Expand your coding skills!)",
        "                       9:00 AM - 10:00 AM: subject3 (Reward: Discover the power of electricity!)",
        "                       10:00 AM - 11:00 AM: subject6 (Reward: Enhance your language proficiency!)",
        "                       11:00 AM - 11:30 AM: Snack Break (Reward: Treat yourself with a healthy snack!)",
        "                       11:30 AM - 1:00 PM: Coding Practice (Reward: Enhance your coding expertise!)",
        "                       1:00 PM - 2:00 PM: Lunch Break (Reward: Enjoy a well-deserved break!)",
        "                       2:00 PM - 3:30 PM: subject4 (Reward: Conquer complex mathematical problems!)",
        "                       3:30 PM - 4:00 PM: Snack Break (Reward: Recharge with a quick snack!)",
        "                       4:00 PM - 5:00 PM: subject1 (Reward: Dive deeper into OS concepts!)",
        "                       5:00 PM - 5:30 PM: Leisure Time (Reward: Indulge in your favorite activity!)",
        "                       5:30 PM - 7:30 PM: WORKOUT TIME  (Reward: Enhance your cricketing skills!)",
        "                       7:30 PM - 8:00 PM: Dinner Break (Reward: Relish a tasty dinner!)",
        "                       8:00 PM - 9:00 PM: subject5 (Reward: Unleash the power of subject5s!)",
        "                       9:00 PM - 10:00 PM: subject6 (Reward: Master a new language!)",
        "                       10:00 PM - 10:30 PM: Self-Study or Revision (Reward: Consolidate your knowledge!)",
        "                       10:30 PM - 6:00 AM: Sleep (Reward: Rejuvenate for a productive day ahead!)"
    ],
    "Saturday": [
        "                     6:00 AM - 7:00 AM: Wake up and Exercise (Reward: Energize your body and mind!)",
        "                     7:00 AM - 8:00 AM: Breakfast and Health (Reward: Nourish your body with a nutritious meal!)",
        "                     8:00 AM - 9:00 AM: subject1 (Reward: Expand your OS knowledge!)",
        "                     9:00 AM - 10:00 AM: subject3 (Reward: Explore the world of high voltage systems!)",
        "                      10:00 AM - 11:00 AM: subject5 (Reward: Dive into the world of processors!)",
        "                      11:00 AM - 11:30 AM: Snack Break (Reward: Recharge with a tasty snack!)",
        "                      11:30 AM - 1:00 PM: Coding Practice (Reward: Hone your coding prowess!)",
        "                      1:00 PM - 2:00 PM: Lunch Break (Reward: Relish a satisfying meal!)",
        "                      2:00 PM - 3:30 PM: subject2 (Reward: Unlock the potential of subject2!)",
        "                      3:30 PM - 4:00 PM: Snack Break (Reward: Treat yourself with a quick snack!)",
        "                      4:00 PM - 5:00 PM: subject6 (Reward: Master a new language!)",
        "                      5:00 PM - 5:30 PM: Leisure Time (Reward: Enjoy a well-deserved break!)",
        "                      5:30 PM - 7:30 PM: WORKOUT TIME  (Reward: Improve your cricketing skills!)",
        "                      7:30 PM - 8:00 PM: Dinner Break (Reward: Savor a delicious dinner!)",
        "                      8:00 PM - 9:00 PM: subject4 (Reward: Master mathematical concepts!)",
        "                      9:00 PM - 10:00 PM: subject1 (Reward: Deepen your understanding!)",
        "                      10:00 PM - 10:30 PM: Self-Study or Revision (Reward: Consolidate your knowledge!)",
        "                      10:30 PM - 6:00 AM: Sleep (Reward: Rest and recharge for a new day!)"
    ],
    "Sunday": [
        "                        Full Day: Free Time (Reward: Relax and enjoy your day off!)",
        "                        6:00 AM - 7:00 AM: Wake up and Exercise (Reward: Energize your body and mind!)",
        "                        7:00 AM - 8:00 AM: Breakfast and Health (Reward: Nourish your body with a nutritious meal!)",
        "                        8:00 AM - 9:00 AM: Coding Practice (Reward: Enhance your coding skills!)",
        "                        9:00 AM - 10:00 AM: subject2 (Reward: Level up your programming proficiency!)",
        "                        10:00 AM - 11:00 AM: subject6 (Reward: Master a new language!)",
        "                        11:00 AM - 11:30 AM: Snack Break (Reward: Treat yourself with a healthy snack!)",
        "                        11:30 AM - 1:00 PM: Leisure Time (Reward: Pursue your hobbies or relax!)",
        "                        1:00 PM - 2:00 PM: Lunch Break (Reward: Enjoy a delicious meal!)",
        "                        2:00 PM - 3:30 PM: subject4 (Reward: Conquer mathematical challenges!)",
        "                        3:30 PM - 4:00 PM: Snack Break (Reward: Recharge with a quick snack!)",
        "                        4:00 PM - 5:00 PM: subject1 (Reward: Enhance your understanding of OS!)",
        "                        5:00 PM - 5:30 PM: free time (Reward: Improve your cricket skills!)",
        "                        5:30 PM - 7:30 PM: WORKOUT TIME  (Reward: Sharpen your coding expertise!)",
        "                        7:30 PM - 8:00 PM: Dinner Break (Reward: Enjoy a satisfying dinner!)",
        "                        8:00 PM - 9:00 PM: subject5 (Reward: Deepen your knowledge of subject5s!)",
        "                        9:00 PM - 10:00 PM: subject3 (Reward: Explore the world of high voltage systems!)",
        "                        10:00 PM - 10:30 PM: Self-Study or Revision (Reward: Strengthen your knowledge!)",
        "                        10:30 PM - 6:00 AM: Sleep (Reward: Rest and recharge for a new week!)"
    ]
}

# Generate PDF for each day
# pdf_files = []
# for day, entries in timetable.items():
#     pdf_file = generate__timetable(day, entries)
#     pdf_files.append(pdf_file)

# # Merge all PDFs into a single PDF
# merge_pdfs(pdf_files, "merged_timetable.pdf")
generate_weekly_timetable(timetable)
